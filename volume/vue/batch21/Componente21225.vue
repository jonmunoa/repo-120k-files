<template>
  <section class="panel-21225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21225");
const base = ref(21225);
const total = computed(() => base.value * 2);

function incrementar21225() {
  base.value++;
}
</script>
