<template>
  <section class="panel-6917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6917");
const base = ref(6917);
const total = computed(() => base.value * 2);

function incrementar6917() {
  base.value++;
}
</script>
