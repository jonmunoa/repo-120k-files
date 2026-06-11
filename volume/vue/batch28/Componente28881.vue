<template>
  <section class="panel-28881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28881");
const base = ref(28881);
const total = computed(() => base.value * 2);

function incrementar28881() {
  base.value++;
}
</script>
