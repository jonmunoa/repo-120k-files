<template>
  <section class="panel-39545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39545");
const base = ref(39545);
const total = computed(() => base.value * 2);

function incrementar39545() {
  base.value++;
}
</script>
