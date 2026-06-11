<template>
  <section class="panel-23649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23649");
const base = ref(23649);
const total = computed(() => base.value * 2);

function incrementar23649() {
  base.value++;
}
</script>
