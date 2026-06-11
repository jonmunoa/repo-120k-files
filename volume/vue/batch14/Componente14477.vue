<template>
  <section class="panel-14477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14477");
const base = ref(14477);
const total = computed(() => base.value * 2);

function incrementar14477() {
  base.value++;
}
</script>
