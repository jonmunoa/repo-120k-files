<template>
  <section class="panel-4373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4373");
const base = ref(4373);
const total = computed(() => base.value * 2);

function incrementar4373() {
  base.value++;
}
</script>
