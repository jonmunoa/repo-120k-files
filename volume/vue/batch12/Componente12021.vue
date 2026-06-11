<template>
  <section class="panel-12021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12021");
const base = ref(12021);
const total = computed(() => base.value * 2);

function incrementar12021() {
  base.value++;
}
</script>
