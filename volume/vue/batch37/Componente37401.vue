<template>
  <section class="panel-37401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37401");
const base = ref(37401);
const total = computed(() => base.value * 2);

function incrementar37401() {
  base.value++;
}
</script>
