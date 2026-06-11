<template>
  <section class="panel-53053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53053");
const base = ref(53053);
const total = computed(() => base.value * 2);

function incrementar53053() {
  base.value++;
}
</script>
