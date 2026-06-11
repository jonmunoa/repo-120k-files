<template>
  <section class="panel-21605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21605");
const base = ref(21605);
const total = computed(() => base.value * 2);

function incrementar21605() {
  base.value++;
}
</script>
