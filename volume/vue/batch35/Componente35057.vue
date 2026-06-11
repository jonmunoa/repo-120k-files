<template>
  <section class="panel-35057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35057");
const base = ref(35057);
const total = computed(() => base.value * 2);

function incrementar35057() {
  base.value++;
}
</script>
