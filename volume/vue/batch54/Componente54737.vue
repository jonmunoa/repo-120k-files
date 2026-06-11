<template>
  <section class="panel-54737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54737");
const base = ref(54737);
const total = computed(() => base.value * 2);

function incrementar54737() {
  base.value++;
}
</script>
