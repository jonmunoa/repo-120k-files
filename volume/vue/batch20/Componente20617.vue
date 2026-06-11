<template>
  <section class="panel-20617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20617");
const base = ref(20617);
const total = computed(() => base.value * 2);

function incrementar20617() {
  base.value++;
}
</script>
