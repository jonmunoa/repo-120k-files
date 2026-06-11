<template>
  <section class="panel-21737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21737");
const base = ref(21737);
const total = computed(() => base.value * 2);

function incrementar21737() {
  base.value++;
}
</script>
