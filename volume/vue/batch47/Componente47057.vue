<template>
  <section class="panel-47057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47057");
const base = ref(47057);
const total = computed(() => base.value * 2);

function incrementar47057() {
  base.value++;
}
</script>
