<template>
  <section class="panel-20649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20649");
const base = ref(20649);
const total = computed(() => base.value * 2);

function incrementar20649() {
  base.value++;
}
</script>
