<template>
  <section class="panel-45681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45681");
const base = ref(45681);
const total = computed(() => base.value * 2);

function incrementar45681() {
  base.value++;
}
</script>
