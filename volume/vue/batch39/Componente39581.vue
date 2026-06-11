<template>
  <section class="panel-39581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39581");
const base = ref(39581);
const total = computed(() => base.value * 2);

function incrementar39581() {
  base.value++;
}
</script>
