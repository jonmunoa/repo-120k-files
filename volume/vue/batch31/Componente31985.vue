<template>
  <section class="panel-31985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31985");
const base = ref(31985);
const total = computed(() => base.value * 2);

function incrementar31985() {
  base.value++;
}
</script>
