<template>
  <section class="panel-6477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6477");
const base = ref(6477);
const total = computed(() => base.value * 2);

function incrementar6477() {
  base.value++;
}
</script>
