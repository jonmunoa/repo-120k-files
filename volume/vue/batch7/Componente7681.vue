<template>
  <section class="panel-7681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7681");
const base = ref(7681);
const total = computed(() => base.value * 2);

function incrementar7681() {
  base.value++;
}
</script>
