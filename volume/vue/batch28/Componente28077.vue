<template>
  <section class="panel-28077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28077");
const base = ref(28077);
const total = computed(() => base.value * 2);

function incrementar28077() {
  base.value++;
}
</script>
