<template>
  <section class="panel-17605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17605");
const base = ref(17605);
const total = computed(() => base.value * 2);

function incrementar17605() {
  base.value++;
}
</script>
