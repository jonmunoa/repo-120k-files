<template>
  <section class="panel-24489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24489");
const base = ref(24489);
const total = computed(() => base.value * 2);

function incrementar24489() {
  base.value++;
}
</script>
