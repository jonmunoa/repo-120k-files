<template>
  <section class="panel-28605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28605");
const base = ref(28605);
const total = computed(() => base.value * 2);

function incrementar28605() {
  base.value++;
}
</script>
