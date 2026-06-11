<template>
  <section class="panel-30737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30737");
const base = ref(30737);
const total = computed(() => base.value * 2);

function incrementar30737() {
  base.value++;
}
</script>
