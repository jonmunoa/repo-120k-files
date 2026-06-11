<template>
  <section class="panel-7053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7053");
const base = ref(7053);
const total = computed(() => base.value * 2);

function incrementar7053() {
  base.value++;
}
</script>
