<template>
  <section class="panel-20977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20977");
const base = ref(20977);
const total = computed(() => base.value * 2);

function incrementar20977() {
  base.value++;
}
</script>
