<template>
  <section class="panel-19997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19997");
const base = ref(19997);
const total = computed(() => base.value * 2);

function incrementar19997() {
  base.value++;
}
</script>
