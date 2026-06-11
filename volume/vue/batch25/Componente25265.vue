<template>
  <section class="panel-25265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25265");
const base = ref(25265);
const total = computed(() => base.value * 2);

function incrementar25265() {
  base.value++;
}
</script>
