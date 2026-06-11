<template>
  <section class="panel-44445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44445");
const base = ref(44445);
const total = computed(() => base.value * 2);

function incrementar44445() {
  base.value++;
}
</script>
