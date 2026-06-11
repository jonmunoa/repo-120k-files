<template>
  <section class="panel-54777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54777");
const base = ref(54777);
const total = computed(() => base.value * 2);

function incrementar54777() {
  base.value++;
}
</script>
