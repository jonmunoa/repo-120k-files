<template>
  <section class="panel-22817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22817");
const base = ref(22817);
const total = computed(() => base.value * 2);

function incrementar22817() {
  base.value++;
}
</script>
