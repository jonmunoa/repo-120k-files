<template>
  <section class="panel-11481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11481");
const base = ref(11481);
const total = computed(() => base.value * 2);

function incrementar11481() {
  base.value++;
}
</script>
