<template>
  <section class="panel-50625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50625");
const base = ref(50625);
const total = computed(() => base.value * 2);

function incrementar50625() {
  base.value++;
}
</script>
