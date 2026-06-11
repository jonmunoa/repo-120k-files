<template>
  <section class="panel-14521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14521");
const base = ref(14521);
const total = computed(() => base.value * 2);

function incrementar14521() {
  base.value++;
}
</script>
