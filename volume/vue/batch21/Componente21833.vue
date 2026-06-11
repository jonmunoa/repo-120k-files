<template>
  <section class="panel-21833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21833");
const base = ref(21833);
const total = computed(() => base.value * 2);

function incrementar21833() {
  base.value++;
}
</script>
