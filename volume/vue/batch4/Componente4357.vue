<template>
  <section class="panel-4357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4357");
const base = ref(4357);
const total = computed(() => base.value * 2);

function incrementar4357() {
  base.value++;
}
</script>
