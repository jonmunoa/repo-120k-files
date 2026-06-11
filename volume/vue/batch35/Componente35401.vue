<template>
  <section class="panel-35401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35401");
const base = ref(35401);
const total = computed(() => base.value * 2);

function incrementar35401() {
  base.value++;
}
</script>
