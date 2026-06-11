<template>
  <section class="panel-2469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2469");
const base = ref(2469);
const total = computed(() => base.value * 2);

function incrementar2469() {
  base.value++;
}
</script>
