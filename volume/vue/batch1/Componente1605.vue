<template>
  <section class="panel-1605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1605");
const base = ref(1605);
const total = computed(() => base.value * 2);

function incrementar1605() {
  base.value++;
}
</script>
