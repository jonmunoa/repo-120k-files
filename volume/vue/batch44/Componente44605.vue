<template>
  <section class="panel-44605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44605");
const base = ref(44605);
const total = computed(() => base.value * 2);

function incrementar44605() {
  base.value++;
}
</script>
