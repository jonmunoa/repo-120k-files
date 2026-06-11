<template>
  <section class="panel-45769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45769");
const base = ref(45769);
const total = computed(() => base.value * 2);

function incrementar45769() {
  base.value++;
}
</script>
