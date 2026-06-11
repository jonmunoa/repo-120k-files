<template>
  <section class="panel-35469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35469");
const base = ref(35469);
const total = computed(() => base.value * 2);

function incrementar35469() {
  base.value++;
}
</script>
