<template>
  <section class="panel-39269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39269");
const base = ref(39269);
const total = computed(() => base.value * 2);

function incrementar39269() {
  base.value++;
}
</script>
