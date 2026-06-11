<template>
  <section class="panel-27753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27753");
const base = ref(27753);
const total = computed(() => base.value * 2);

function incrementar27753() {
  base.value++;
}
</script>
