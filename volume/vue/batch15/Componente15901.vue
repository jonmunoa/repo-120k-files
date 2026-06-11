<template>
  <section class="panel-15901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15901");
const base = ref(15901);
const total = computed(() => base.value * 2);

function incrementar15901() {
  base.value++;
}
</script>
