<template>
  <section class="panel-33033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33033");
const base = ref(33033);
const total = computed(() => base.value * 2);

function incrementar33033() {
  base.value++;
}
</script>
