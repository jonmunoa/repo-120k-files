<template>
  <section class="panel-36893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36893");
const base = ref(36893);
const total = computed(() => base.value * 2);

function incrementar36893() {
  base.value++;
}
</script>
