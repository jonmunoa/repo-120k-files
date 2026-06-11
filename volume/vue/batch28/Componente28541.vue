<template>
  <section class="panel-28541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28541");
const base = ref(28541);
const total = computed(() => base.value * 2);

function incrementar28541() {
  base.value++;
}
</script>
