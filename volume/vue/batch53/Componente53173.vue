<template>
  <section class="panel-53173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53173");
const base = ref(53173);
const total = computed(() => base.value * 2);

function incrementar53173() {
  base.value++;
}
</script>
