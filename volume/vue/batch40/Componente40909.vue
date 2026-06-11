<template>
  <section class="panel-40909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40909");
const base = ref(40909);
const total = computed(() => base.value * 2);

function incrementar40909() {
  base.value++;
}
</script>
