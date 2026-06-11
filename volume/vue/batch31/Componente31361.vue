<template>
  <section class="panel-31361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31361");
const base = ref(31361);
const total = computed(() => base.value * 2);

function incrementar31361() {
  base.value++;
}
</script>
