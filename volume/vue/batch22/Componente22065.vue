<template>
  <section class="panel-22065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22065");
const base = ref(22065);
const total = computed(() => base.value * 2);

function incrementar22065() {
  base.value++;
}
</script>
