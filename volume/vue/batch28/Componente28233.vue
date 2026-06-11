<template>
  <section class="panel-28233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28233");
const base = ref(28233);
const total = computed(() => base.value * 2);

function incrementar28233() {
  base.value++;
}
</script>
