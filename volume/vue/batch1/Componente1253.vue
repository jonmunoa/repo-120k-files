<template>
  <section class="panel-1253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1253");
const base = ref(1253);
const total = computed(() => base.value * 2);

function incrementar1253() {
  base.value++;
}
</script>
