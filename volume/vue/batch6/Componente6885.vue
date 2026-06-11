<template>
  <section class="panel-6885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6885");
const base = ref(6885);
const total = computed(() => base.value * 2);

function incrementar6885() {
  base.value++;
}
</script>
