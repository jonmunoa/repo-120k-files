<template>
  <section class="panel-52541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52541");
const base = ref(52541);
const total = computed(() => base.value * 2);

function incrementar52541() {
  base.value++;
}
</script>
