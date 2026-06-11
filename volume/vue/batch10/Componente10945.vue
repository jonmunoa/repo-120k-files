<template>
  <section class="panel-10945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10945");
const base = ref(10945);
const total = computed(() => base.value * 2);

function incrementar10945() {
  base.value++;
}
</script>
