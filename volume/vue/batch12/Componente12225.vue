<template>
  <section class="panel-12225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12225");
const base = ref(12225);
const total = computed(() => base.value * 2);

function incrementar12225() {
  base.value++;
}
</script>
