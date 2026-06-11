<template>
  <section class="panel-41477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41477");
const base = ref(41477);
const total = computed(() => base.value * 2);

function incrementar41477() {
  base.value++;
}
</script>
