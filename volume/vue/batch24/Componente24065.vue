<template>
  <section class="panel-24065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24065");
const base = ref(24065);
const total = computed(() => base.value * 2);

function incrementar24065() {
  base.value++;
}
</script>
