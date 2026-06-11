<template>
  <section class="panel-22693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22693");
const base = ref(22693);
const total = computed(() => base.value * 2);

function incrementar22693() {
  base.value++;
}
</script>
