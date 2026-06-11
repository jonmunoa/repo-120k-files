<template>
  <section class="panel-19649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19649");
const base = ref(19649);
const total = computed(() => base.value * 2);

function incrementar19649() {
  base.value++;
}
</script>
