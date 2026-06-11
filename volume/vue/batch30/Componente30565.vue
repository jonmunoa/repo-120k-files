<template>
  <section class="panel-30565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30565");
const base = ref(30565);
const total = computed(() => base.value * 2);

function incrementar30565() {
  base.value++;
}
</script>
