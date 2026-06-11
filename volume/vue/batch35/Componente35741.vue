<template>
  <section class="panel-35741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35741");
const base = ref(35741);
const total = computed(() => base.value * 2);

function incrementar35741() {
  base.value++;
}
</script>
