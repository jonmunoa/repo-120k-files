<template>
  <section class="panel-23013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23013");
const base = ref(23013);
const total = computed(() => base.value * 2);

function incrementar23013() {
  base.value++;
}
</script>
