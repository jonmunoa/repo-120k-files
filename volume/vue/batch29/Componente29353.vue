<template>
  <section class="panel-29353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29353");
const base = ref(29353);
const total = computed(() => base.value * 2);

function incrementar29353() {
  base.value++;
}
</script>
