<template>
  <section class="panel-39337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39337");
const base = ref(39337);
const total = computed(() => base.value * 2);

function incrementar39337() {
  base.value++;
}
</script>
