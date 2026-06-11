<template>
  <section class="panel-38341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38341");
const base = ref(38341);
const total = computed(() => base.value * 2);

function incrementar38341() {
  base.value++;
}
</script>
