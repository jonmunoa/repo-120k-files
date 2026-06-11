<template>
  <section class="panel-27517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27517");
const base = ref(27517);
const total = computed(() => base.value * 2);

function incrementar27517() {
  base.value++;
}
</script>
