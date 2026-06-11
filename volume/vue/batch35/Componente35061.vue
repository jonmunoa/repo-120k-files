<template>
  <section class="panel-35061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35061");
const base = ref(35061);
const total = computed(() => base.value * 2);

function incrementar35061() {
  base.value++;
}
</script>
