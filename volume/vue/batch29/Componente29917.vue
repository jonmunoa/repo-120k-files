<template>
  <section class="panel-29917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29917");
const base = ref(29917);
const total = computed(() => base.value * 2);

function incrementar29917() {
  base.value++;
}
</script>
