<template>
  <section class="panel-29065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29065");
const base = ref(29065);
const total = computed(() => base.value * 2);

function incrementar29065() {
  base.value++;
}
</script>
