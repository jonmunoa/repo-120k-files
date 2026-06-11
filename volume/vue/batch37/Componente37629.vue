<template>
  <section class="panel-37629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37629");
const base = ref(37629);
const total = computed(() => base.value * 2);

function incrementar37629() {
  base.value++;
}
</script>
