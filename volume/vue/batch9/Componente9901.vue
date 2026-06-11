<template>
  <section class="panel-9901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9901");
const base = ref(9901);
const total = computed(() => base.value * 2);

function incrementar9901() {
  base.value++;
}
</script>
