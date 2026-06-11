<template>
  <section class="panel-24145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24145");
const base = ref(24145);
const total = computed(() => base.value * 2);

function incrementar24145() {
  base.value++;
}
</script>
