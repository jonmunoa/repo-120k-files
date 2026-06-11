<template>
  <section class="panel-37957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37957");
const base = ref(37957);
const total = computed(() => base.value * 2);

function incrementar37957() {
  base.value++;
}
</script>
