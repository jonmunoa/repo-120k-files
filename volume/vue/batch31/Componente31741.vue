<template>
  <section class="panel-31741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31741");
const base = ref(31741);
const total = computed(() => base.value * 2);

function incrementar31741() {
  base.value++;
}
</script>
