<template>
  <section class="panel-14265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14265");
const base = ref(14265);
const total = computed(() => base.value * 2);

function incrementar14265() {
  base.value++;
}
</script>
