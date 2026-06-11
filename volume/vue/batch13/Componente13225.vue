<template>
  <section class="panel-13225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13225");
const base = ref(13225);
const total = computed(() => base.value * 2);

function incrementar13225() {
  base.value++;
}
</script>
