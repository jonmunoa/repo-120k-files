<template>
  <section class="panel-51053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51053");
const base = ref(51053);
const total = computed(() => base.value * 2);

function incrementar51053() {
  base.value++;
}
</script>
