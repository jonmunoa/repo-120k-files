<template>
  <section class="panel-51737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51737");
const base = ref(51737);
const total = computed(() => base.value * 2);

function incrementar51737() {
  base.value++;
}
</script>
