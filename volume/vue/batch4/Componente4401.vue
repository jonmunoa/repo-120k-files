<template>
  <section class="panel-4401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4401");
const base = ref(4401);
const total = computed(() => base.value * 2);

function incrementar4401() {
  base.value++;
}
</script>
