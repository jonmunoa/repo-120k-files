<template>
  <section class="panel-14053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14053");
const base = ref(14053);
const total = computed(() => base.value * 2);

function incrementar14053() {
  base.value++;
}
</script>
