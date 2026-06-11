<template>
  <section class="panel-23401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23401");
const base = ref(23401);
const total = computed(() => base.value * 2);

function incrementar23401() {
  base.value++;
}
</script>
