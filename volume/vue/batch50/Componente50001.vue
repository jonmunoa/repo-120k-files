<template>
  <section class="panel-50001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50001");
const base = ref(50001);
const total = computed(() => base.value * 2);

function incrementar50001() {
  base.value++;
}
</script>
