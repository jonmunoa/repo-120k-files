<template>
  <section class="panel-805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 805");
const base = ref(805);
const total = computed(() => base.value * 2);

function incrementar805() {
  base.value++;
}
</script>
