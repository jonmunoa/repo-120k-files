<template>
  <section class="panel-20401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20401");
const base = ref(20401);
const total = computed(() => base.value * 2);

function incrementar20401() {
  base.value++;
}
</script>
