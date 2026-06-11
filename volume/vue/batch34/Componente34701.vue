<template>
  <section class="panel-34701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34701");
const base = ref(34701);
const total = computed(() => base.value * 2);

function incrementar34701() {
  base.value++;
}
</script>
