<template>
  <section class="panel-22649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22649");
const base = ref(22649);
const total = computed(() => base.value * 2);

function incrementar22649() {
  base.value++;
}
</script>
