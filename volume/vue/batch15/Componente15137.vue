<template>
  <section class="panel-15137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15137");
const base = ref(15137);
const total = computed(() => base.value * 2);

function incrementar15137() {
  base.value++;
}
</script>
