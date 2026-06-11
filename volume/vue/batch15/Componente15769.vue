<template>
  <section class="panel-15769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15769");
const base = ref(15769);
const total = computed(() => base.value * 2);

function incrementar15769() {
  base.value++;
}
</script>
