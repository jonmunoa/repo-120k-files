<template>
  <section class="panel-28701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28701");
const base = ref(28701);
const total = computed(() => base.value * 2);

function incrementar28701() {
  base.value++;
}
</script>
