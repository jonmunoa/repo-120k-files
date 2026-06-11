<template>
  <section class="panel-40173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40173");
const base = ref(40173);
const total = computed(() => base.value * 2);

function incrementar40173() {
  base.value++;
}
</script>
