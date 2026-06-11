<template>
  <section class="panel-44013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44013");
const base = ref(44013);
const total = computed(() => base.value * 2);

function incrementar44013() {
  base.value++;
}
</script>
