<template>
  <section class="panel-945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 945");
const base = ref(945);
const total = computed(() => base.value * 2);

function incrementar945() {
  base.value++;
}
</script>
