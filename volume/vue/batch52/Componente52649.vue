<template>
  <section class="panel-52649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52649");
const base = ref(52649);
const total = computed(() => base.value * 2);

function incrementar52649() {
  base.value++;
}
</script>
