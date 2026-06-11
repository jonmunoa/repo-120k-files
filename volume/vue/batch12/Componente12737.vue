<template>
  <section class="panel-12737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12737");
const base = ref(12737);
const total = computed(() => base.value * 2);

function incrementar12737() {
  base.value++;
}
</script>
