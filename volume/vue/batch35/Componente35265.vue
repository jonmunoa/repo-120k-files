<template>
  <section class="panel-35265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35265");
const base = ref(35265);
const total = computed(() => base.value * 2);

function incrementar35265() {
  base.value++;
}
</script>
