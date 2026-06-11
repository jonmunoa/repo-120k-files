<template>
  <section class="panel-10289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10289");
const base = ref(10289);
const total = computed(() => base.value * 2);

function incrementar10289() {
  base.value++;
}
</script>
