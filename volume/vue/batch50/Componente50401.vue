<template>
  <section class="panel-50401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50401");
const base = ref(50401);
const total = computed(() => base.value * 2);

function incrementar50401() {
  base.value++;
}
</script>
