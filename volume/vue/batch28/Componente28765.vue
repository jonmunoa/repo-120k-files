<template>
  <section class="panel-28765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28765");
const base = ref(28765);
const total = computed(() => base.value * 2);

function incrementar28765() {
  base.value++;
}
</script>
