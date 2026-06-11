<template>
  <section class="panel-19945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19945");
const base = ref(19945);
const total = computed(() => base.value * 2);

function incrementar19945() {
  base.value++;
}
</script>
