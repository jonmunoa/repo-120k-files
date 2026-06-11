<template>
  <section class="panel-55309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55309");
const base = ref(55309);
const total = computed(() => base.value * 2);

function incrementar55309() {
  base.value++;
}
</script>
