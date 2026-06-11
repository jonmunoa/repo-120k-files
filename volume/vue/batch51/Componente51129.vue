<template>
  <section class="panel-51129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51129");
const base = ref(51129);
const total = computed(() => base.value * 2);

function incrementar51129() {
  base.value++;
}
</script>
