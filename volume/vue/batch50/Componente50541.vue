<template>
  <section class="panel-50541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50541");
const base = ref(50541);
const total = computed(() => base.value * 2);

function incrementar50541() {
  base.value++;
}
</script>
