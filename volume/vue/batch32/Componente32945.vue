<template>
  <section class="panel-32945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32945");
const base = ref(32945);
const total = computed(() => base.value * 2);

function incrementar32945() {
  base.value++;
}
</script>
