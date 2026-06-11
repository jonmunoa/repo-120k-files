<template>
  <section class="panel-17249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17249");
const base = ref(17249);
const total = computed(() => base.value * 2);

function incrementar17249() {
  base.value++;
}
</script>
