<template>
  <section class="panel-28573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28573");
const base = ref(28573);
const total = computed(() => base.value * 2);

function incrementar28573() {
  base.value++;
}
</script>
