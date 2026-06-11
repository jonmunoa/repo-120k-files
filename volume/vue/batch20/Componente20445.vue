<template>
  <section class="panel-20445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20445");
const base = ref(20445);
const total = computed(() => base.value * 2);

function incrementar20445() {
  base.value++;
}
</script>
