<template>
  <section class="panel-20629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20629");
const base = ref(20629);
const total = computed(() => base.value * 2);

function incrementar20629() {
  base.value++;
}
</script>
