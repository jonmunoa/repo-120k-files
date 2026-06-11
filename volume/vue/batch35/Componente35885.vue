<template>
  <section class="panel-35885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35885");
const base = ref(35885);
const total = computed(() => base.value * 2);

function incrementar35885() {
  base.value++;
}
</script>
