<template>
  <section class="panel-7917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7917");
const base = ref(7917);
const total = computed(() => base.value * 2);

function incrementar7917() {
  base.value++;
}
</script>
