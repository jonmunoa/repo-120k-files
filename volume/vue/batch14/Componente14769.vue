<template>
  <section class="panel-14769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14769");
const base = ref(14769);
const total = computed(() => base.value * 2);

function incrementar14769() {
  base.value++;
}
</script>
