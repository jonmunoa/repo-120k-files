<template>
  <section class="panel-12625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12625");
const base = ref(12625);
const total = computed(() => base.value * 2);

function incrementar12625() {
  base.value++;
}
</script>
