<template>
  <section class="panel-41401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41401");
const base = ref(41401);
const total = computed(() => base.value * 2);

function incrementar41401() {
  base.value++;
}
</script>
