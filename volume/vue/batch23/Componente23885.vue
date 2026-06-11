<template>
  <section class="panel-23885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23885");
const base = ref(23885);
const total = computed(() => base.value * 2);

function incrementar23885() {
  base.value++;
}
</script>
