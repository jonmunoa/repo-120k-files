<template>
  <section class="panel-6277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6277");
const base = ref(6277);
const total = computed(() => base.value * 2);

function incrementar6277() {
  base.value++;
}
</script>
