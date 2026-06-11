<template>
  <section class="panel-50033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50033");
const base = ref(50033);
const total = computed(() => base.value * 2);

function incrementar50033() {
  base.value++;
}
</script>
