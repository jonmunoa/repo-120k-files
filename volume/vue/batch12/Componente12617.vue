<template>
  <section class="panel-12617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12617");
const base = ref(12617);
const total = computed(() => base.value * 2);

function incrementar12617() {
  base.value++;
}
</script>
