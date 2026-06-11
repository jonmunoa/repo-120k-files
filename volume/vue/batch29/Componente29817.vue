<template>
  <section class="panel-29817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29817");
const base = ref(29817);
const total = computed(() => base.value * 2);

function incrementar29817() {
  base.value++;
}
</script>
