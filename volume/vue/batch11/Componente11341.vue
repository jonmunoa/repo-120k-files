<template>
  <section class="panel-11341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11341");
const base = ref(11341);
const total = computed(() => base.value * 2);

function incrementar11341() {
  base.value++;
}
</script>
