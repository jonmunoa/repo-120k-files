<template>
  <section class="panel-13401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13401");
const base = ref(13401);
const total = computed(() => base.value * 2);

function incrementar13401() {
  base.value++;
}
</script>
