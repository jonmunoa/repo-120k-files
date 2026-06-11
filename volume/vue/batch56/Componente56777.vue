<template>
  <section class="panel-56777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56777");
const base = ref(56777);
const total = computed(() => base.value * 2);

function incrementar56777() {
  base.value++;
}
</script>
