<template>
  <section class="panel-55797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55797");
const base = ref(55797);
const total = computed(() => base.value * 2);

function incrementar55797() {
  base.value++;
}
</script>
