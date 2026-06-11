<template>
  <section class="panel-3813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3813");
const base = ref(3813);
const total = computed(() => base.value * 2);

function incrementar3813() {
  base.value++;
}
</script>
