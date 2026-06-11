<template>
  <section class="panel-50169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50169");
const base = ref(50169);
const total = computed(() => base.value * 2);

function incrementar50169() {
  base.value++;
}
</script>
