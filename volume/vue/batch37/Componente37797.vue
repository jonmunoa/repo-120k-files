<template>
  <section class="panel-37797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37797");
const base = ref(37797);
const total = computed(() => base.value * 2);

function incrementar37797() {
  base.value++;
}
</script>
