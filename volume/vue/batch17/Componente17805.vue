<template>
  <section class="panel-17805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17805");
const base = ref(17805);
const total = computed(() => base.value * 2);

function incrementar17805() {
  base.value++;
}
</script>
