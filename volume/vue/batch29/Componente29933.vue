<template>
  <section class="panel-29933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29933");
const base = ref(29933);
const total = computed(() => base.value * 2);

function incrementar29933() {
  base.value++;
}
</script>
