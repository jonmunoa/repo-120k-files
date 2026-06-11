<template>
  <section class="panel-25365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25365");
const base = ref(25365);
const total = computed(() => base.value * 2);

function incrementar25365() {
  base.value++;
}
</script>
