<template>
  <section class="panel-22885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22885");
const base = ref(22885);
const total = computed(() => base.value * 2);

function incrementar22885() {
  base.value++;
}
</script>
