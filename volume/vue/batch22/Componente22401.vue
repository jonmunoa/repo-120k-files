<template>
  <section class="panel-22401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22401");
const base = ref(22401);
const total = computed(() => base.value * 2);

function incrementar22401() {
  base.value++;
}
</script>
