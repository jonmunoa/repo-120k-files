<template>
  <section class="panel-27069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27069");
const base = ref(27069);
const total = computed(() => base.value * 2);

function incrementar27069() {
  base.value++;
}
</script>
