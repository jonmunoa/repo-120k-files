<template>
  <section class="panel-22629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22629");
const base = ref(22629);
const total = computed(() => base.value * 2);

function incrementar22629() {
  base.value++;
}
</script>
