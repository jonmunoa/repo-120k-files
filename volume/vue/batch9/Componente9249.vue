<template>
  <section class="panel-9249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9249");
const base = ref(9249);
const total = computed(() => base.value * 2);

function incrementar9249() {
  base.value++;
}
</script>
