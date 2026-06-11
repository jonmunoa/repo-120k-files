<template>
  <section class="panel-22333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22333");
const base = ref(22333);
const total = computed(() => base.value * 2);

function incrementar22333() {
  base.value++;
}
</script>
