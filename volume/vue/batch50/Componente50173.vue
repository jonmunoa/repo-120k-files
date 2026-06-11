<template>
  <section class="panel-50173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50173");
const base = ref(50173);
const total = computed(() => base.value * 2);

function incrementar50173() {
  base.value++;
}
</script>
