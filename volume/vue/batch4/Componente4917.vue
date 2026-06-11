<template>
  <section class="panel-4917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4917");
const base = ref(4917);
const total = computed(() => base.value * 2);

function incrementar4917() {
  base.value++;
}
</script>
