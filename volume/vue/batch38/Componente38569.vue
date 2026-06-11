<template>
  <section class="panel-38569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38569");
const base = ref(38569);
const total = computed(() => base.value * 2);

function incrementar38569() {
  base.value++;
}
</script>
