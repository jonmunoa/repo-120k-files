<template>
  <section class="panel-56797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56797");
const base = ref(56797);
const total = computed(() => base.value * 2);

function incrementar56797() {
  base.value++;
}
</script>
