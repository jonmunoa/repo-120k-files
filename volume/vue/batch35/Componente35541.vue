<template>
  <section class="panel-35541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35541");
const base = ref(35541);
const total = computed(() => base.value * 2);

function incrementar35541() {
  base.value++;
}
</script>
