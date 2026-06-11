<template>
  <section class="panel-8225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8225");
const base = ref(8225);
const total = computed(() => base.value * 2);

function incrementar8225() {
  base.value++;
}
</script>
