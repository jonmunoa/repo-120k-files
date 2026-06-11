<template>
  <section class="panel-39361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39361");
const base = ref(39361);
const total = computed(() => base.value * 2);

function incrementar39361() {
  base.value++;
}
</script>
