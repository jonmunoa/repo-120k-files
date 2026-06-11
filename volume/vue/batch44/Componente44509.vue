<template>
  <section class="panel-44509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44509");
const base = ref(44509);
const total = computed(() => base.value * 2);

function incrementar44509() {
  base.value++;
}
</script>
