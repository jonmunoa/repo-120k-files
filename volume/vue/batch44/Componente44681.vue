<template>
  <section class="panel-44681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44681");
const base = ref(44681);
const total = computed(() => base.value * 2);

function incrementar44681() {
  base.value++;
}
</script>
