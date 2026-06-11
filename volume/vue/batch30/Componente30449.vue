<template>
  <section class="panel-30449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30449");
const base = ref(30449);
const total = computed(() => base.value * 2);

function incrementar30449() {
  base.value++;
}
</script>
