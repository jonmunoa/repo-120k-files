<template>
  <section class="panel-35437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35437");
const base = ref(35437);
const total = computed(() => base.value * 2);

function incrementar35437() {
  base.value++;
}
</script>
