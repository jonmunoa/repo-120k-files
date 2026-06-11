<template>
  <section class="panel-4797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4797");
const base = ref(4797);
const total = computed(() => base.value * 2);

function incrementar4797() {
  base.value++;
}
</script>
