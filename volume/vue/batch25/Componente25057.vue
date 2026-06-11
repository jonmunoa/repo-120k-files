<template>
  <section class="panel-25057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25057");
const base = ref(25057);
const total = computed(() => base.value * 2);

function incrementar25057() {
  base.value++;
}
</script>
