<template>
  <section class="panel-18033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18033");
const base = ref(18033);
const total = computed(() => base.value * 2);

function incrementar18033() {
  base.value++;
}
</script>
