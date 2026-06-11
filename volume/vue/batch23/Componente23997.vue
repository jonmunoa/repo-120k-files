<template>
  <section class="panel-23997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23997");
const base = ref(23997);
const total = computed(() => base.value * 2);

function incrementar23997() {
  base.value++;
}
</script>
