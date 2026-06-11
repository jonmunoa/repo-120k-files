<template>
  <section class="panel-3469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3469");
const base = ref(3469);
const total = computed(() => base.value * 2);

function incrementar3469() {
  base.value++;
}
</script>
