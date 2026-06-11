<template>
  <section class="panel-29249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29249");
const base = ref(29249);
const total = computed(() => base.value * 2);

function incrementar29249() {
  base.value++;
}
</script>
