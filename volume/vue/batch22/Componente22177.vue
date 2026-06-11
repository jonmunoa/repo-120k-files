<template>
  <section class="panel-22177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22177");
const base = ref(22177);
const total = computed(() => base.value * 2);

function incrementar22177() {
  base.value++;
}
</script>
