<template>
  <section class="panel-33701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33701");
const base = ref(33701);
const total = computed(() => base.value * 2);

function incrementar33701() {
  base.value++;
}
</script>
