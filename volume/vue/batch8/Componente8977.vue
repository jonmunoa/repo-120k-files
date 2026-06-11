<template>
  <section class="panel-8977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8977");
const base = ref(8977);
const total = computed(() => base.value * 2);

function incrementar8977() {
  base.value++;
}
</script>
