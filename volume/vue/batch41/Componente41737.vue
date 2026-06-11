<template>
  <section class="panel-41737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41737");
const base = ref(41737);
const total = computed(() => base.value * 2);

function incrementar41737() {
  base.value++;
}
</script>
