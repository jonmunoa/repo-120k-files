<template>
  <section class="panel-29681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29681");
const base = ref(29681);
const total = computed(() => base.value * 2);

function incrementar29681() {
  base.value++;
}
</script>
