<template>
  <section class="panel-24173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24173");
const base = ref(24173);
const total = computed(() => base.value * 2);

function incrementar24173() {
  base.value++;
}
</script>
