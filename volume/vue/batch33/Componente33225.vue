<template>
  <section class="panel-33225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33225");
const base = ref(33225);
const total = computed(() => base.value * 2);

function incrementar33225() {
  base.value++;
}
</script>
