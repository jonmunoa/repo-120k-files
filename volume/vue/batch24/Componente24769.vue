<template>
  <section class="panel-24769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24769");
const base = ref(24769);
const total = computed(() => base.value * 2);

function incrementar24769() {
  base.value++;
}
</script>
