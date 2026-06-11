<template>
  <section class="panel-24917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24917");
const base = ref(24917);
const total = computed(() => base.value * 2);

function incrementar24917() {
  base.value++;
}
</script>
