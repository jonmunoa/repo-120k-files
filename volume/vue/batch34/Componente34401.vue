<template>
  <section class="panel-34401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34401");
const base = ref(34401);
const total = computed(() => base.value * 2);

function incrementar34401() {
  base.value++;
}
</script>
