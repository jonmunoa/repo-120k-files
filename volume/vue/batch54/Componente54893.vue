<template>
  <section class="panel-54893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54893");
const base = ref(54893);
const total = computed(() => base.value * 2);

function incrementar54893() {
  base.value++;
}
</script>
