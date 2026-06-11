<template>
  <section class="panel-39705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39705");
const base = ref(39705);
const total = computed(() => base.value * 2);

function incrementar39705() {
  base.value++;
}
</script>
