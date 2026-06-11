<template>
  <section class="panel-39681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39681");
const base = ref(39681);
const total = computed(() => base.value * 2);

function incrementar39681() {
  base.value++;
}
</script>
