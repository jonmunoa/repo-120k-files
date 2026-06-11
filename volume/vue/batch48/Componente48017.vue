<template>
  <section class="panel-48017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48017");
const base = ref(48017);
const total = computed(() => base.value * 2);

function incrementar48017() {
  base.value++;
}
</script>
