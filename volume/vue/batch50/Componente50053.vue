<template>
  <section class="panel-50053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50053");
const base = ref(50053);
const total = computed(() => base.value * 2);

function incrementar50053() {
  base.value++;
}
</script>
