<template>
  <section class="panel-8053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8053");
const base = ref(8053);
const total = computed(() => base.value * 2);

function incrementar8053() {
  base.value++;
}
</script>
