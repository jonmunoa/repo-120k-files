<template>
  <section class="panel-29093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29093");
const base = ref(29093);
const total = computed(() => base.value * 2);

function incrementar29093() {
  base.value++;
}
</script>
