<template>
  <section class="panel-3977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3977");
const base = ref(3977);
const total = computed(() => base.value * 2);

function incrementar3977() {
  base.value++;
}
</script>
