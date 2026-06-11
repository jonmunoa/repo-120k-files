<template>
  <section class="panel-13033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13033");
const base = ref(13033);
const total = computed(() => base.value * 2);

function incrementar13033() {
  base.value++;
}
</script>
