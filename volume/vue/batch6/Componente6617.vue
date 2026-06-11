<template>
  <section class="panel-6617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6617");
const base = ref(6617);
const total = computed(() => base.value * 2);

function incrementar6617() {
  base.value++;
}
</script>
