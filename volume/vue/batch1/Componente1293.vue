<template>
  <section class="panel-1293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1293");
const base = ref(1293);
const total = computed(() => base.value * 2);

function incrementar1293() {
  base.value++;
}
</script>
