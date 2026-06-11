<template>
  <section class="panel-39997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39997");
const base = ref(39997);
const total = computed(() => base.value * 2);

function incrementar39997() {
  base.value++;
}
</script>
