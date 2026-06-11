<template>
  <section class="panel-12065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12065");
const base = ref(12065);
const total = computed(() => base.value * 2);

function incrementar12065() {
  base.value++;
}
</script>
