<template>
  <section class="panel-6445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6445");
const base = ref(6445);
const total = computed(() => base.value * 2);

function incrementar6445() {
  base.value++;
}
</script>
