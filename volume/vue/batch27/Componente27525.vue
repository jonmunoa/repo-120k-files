<template>
  <section class="panel-27525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27525");
const base = ref(27525);
const total = computed(() => base.value * 2);

function incrementar27525() {
  base.value++;
}
</script>
