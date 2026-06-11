<template>
  <section class="panel-8401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8401");
const base = ref(8401);
const total = computed(() => base.value * 2);

function incrementar8401() {
  base.value++;
}
</script>
