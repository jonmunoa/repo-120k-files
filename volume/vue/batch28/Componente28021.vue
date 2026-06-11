<template>
  <section class="panel-28021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28021");
const base = ref(28021);
const total = computed(() => base.value * 2);

function incrementar28021() {
  base.value++;
}
</script>
