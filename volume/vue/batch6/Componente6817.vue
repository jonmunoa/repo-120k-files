<template>
  <section class="panel-6817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6817");
const base = ref(6817);
const total = computed(() => base.value * 2);

function incrementar6817() {
  base.value++;
}
</script>
