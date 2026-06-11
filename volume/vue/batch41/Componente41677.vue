<template>
  <section class="panel-41677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41677");
const base = ref(41677);
const total = computed(() => base.value * 2);

function incrementar41677() {
  base.value++;
}
</script>
