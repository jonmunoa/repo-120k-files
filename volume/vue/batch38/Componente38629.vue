<template>
  <section class="panel-38629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38629");
const base = ref(38629);
const total = computed(() => base.value * 2);

function incrementar38629() {
  base.value++;
}
</script>
