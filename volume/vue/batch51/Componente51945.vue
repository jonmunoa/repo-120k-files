<template>
  <section class="panel-51945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51945");
const base = ref(51945);
const total = computed(() => base.value * 2);

function incrementar51945() {
  base.value++;
}
</script>
