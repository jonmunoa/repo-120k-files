<template>
  <section class="panel-27977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27977");
const base = ref(27977);
const total = computed(() => base.value * 2);

function incrementar27977() {
  base.value++;
}
</script>
