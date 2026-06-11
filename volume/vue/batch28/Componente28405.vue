<template>
  <section class="panel-28405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28405");
const base = ref(28405);
const total = computed(() => base.value * 2);

function incrementar28405() {
  base.value++;
}
</script>
