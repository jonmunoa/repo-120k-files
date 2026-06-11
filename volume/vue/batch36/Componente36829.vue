<template>
  <section class="panel-36829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36829");
const base = ref(36829);
const total = computed(() => base.value * 2);

function incrementar36829() {
  base.value++;
}
</script>
