<template>
  <section class="panel-55681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55681");
const base = ref(55681);
const total = computed(() => base.value * 2);

function incrementar55681() {
  base.value++;
}
</script>
