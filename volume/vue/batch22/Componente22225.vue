<template>
  <section class="panel-22225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22225");
const base = ref(22225);
const total = computed(() => base.value * 2);

function incrementar22225() {
  base.value++;
}
</script>
