<template>
  <section class="panel-22445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22445");
const base = ref(22445);
const total = computed(() => base.value * 2);

function incrementar22445() {
  base.value++;
}
</script>
