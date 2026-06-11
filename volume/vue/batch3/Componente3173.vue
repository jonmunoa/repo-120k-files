<template>
  <section class="panel-3173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3173");
const base = ref(3173);
const total = computed(() => base.value * 2);

function incrementar3173() {
  base.value++;
}
</script>
