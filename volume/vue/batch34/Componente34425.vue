<template>
  <section class="panel-34425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34425");
const base = ref(34425);
const total = computed(() => base.value * 2);

function incrementar34425() {
  base.value++;
}
</script>
