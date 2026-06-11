<template>
  <section class="panel-20705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20705");
const base = ref(20705);
const total = computed(() => base.value * 2);

function incrementar20705() {
  base.value++;
}
</script>
