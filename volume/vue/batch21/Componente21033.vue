<template>
  <section class="panel-21033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21033");
const base = ref(21033);
const total = computed(() => base.value * 2);

function incrementar21033() {
  base.value++;
}
</script>
