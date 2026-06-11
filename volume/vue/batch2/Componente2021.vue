<template>
  <section class="panel-2021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2021");
const base = ref(2021);
const total = computed(() => base.value * 2);

function incrementar2021() {
  base.value++;
}
</script>
