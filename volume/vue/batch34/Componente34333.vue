<template>
  <section class="panel-34333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34333");
const base = ref(34333);
const total = computed(() => base.value * 2);

function incrementar34333() {
  base.value++;
}
</script>
