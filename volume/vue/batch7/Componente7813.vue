<template>
  <section class="panel-7813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7813");
const base = ref(7813);
const total = computed(() => base.value * 2);

function incrementar7813() {
  base.value++;
}
</script>
