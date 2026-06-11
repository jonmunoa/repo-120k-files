<template>
  <section class="panel-32401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32401");
const base = ref(32401);
const total = computed(() => base.value * 2);

function incrementar32401() {
  base.value++;
}
</script>
