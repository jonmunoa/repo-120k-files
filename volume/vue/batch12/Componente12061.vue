<template>
  <section class="panel-12061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12061");
const base = ref(12061);
const total = computed(() => base.value * 2);

function incrementar12061() {
  base.value++;
}
</script>
