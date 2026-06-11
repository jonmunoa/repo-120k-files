<template>
  <section class="panel-14677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14677");
const base = ref(14677);
const total = computed(() => base.value * 2);

function incrementar14677() {
  base.value++;
}
</script>
