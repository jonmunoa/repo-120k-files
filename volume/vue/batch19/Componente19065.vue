<template>
  <section class="panel-19065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19065");
const base = ref(19065);
const total = computed(() => base.value * 2);

function incrementar19065() {
  base.value++;
}
</script>
