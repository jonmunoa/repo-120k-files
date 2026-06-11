<template>
  <section class="panel-2789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2789");
const base = ref(2789);
const total = computed(() => base.value * 2);

function incrementar2789() {
  base.value++;
}
</script>
