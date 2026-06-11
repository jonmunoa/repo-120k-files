<template>
  <section class="panel-4005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4005");
const base = ref(4005);
const total = computed(() => base.value * 2);

function incrementar4005() {
  base.value++;
}
</script>
