<template>
  <section class="panel-4137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4137");
const base = ref(4137);
const total = computed(() => base.value * 2);

function incrementar4137() {
  base.value++;
}
</script>
