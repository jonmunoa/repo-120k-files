<template>
  <section class="panel-18173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18173");
const base = ref(18173);
const total = computed(() => base.value * 2);

function incrementar18173() {
  base.value++;
}
</script>
