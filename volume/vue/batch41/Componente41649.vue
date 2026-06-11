<template>
  <section class="panel-41649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41649");
const base = ref(41649);
const total = computed(() => base.value * 2);

function incrementar41649() {
  base.value++;
}
</script>
