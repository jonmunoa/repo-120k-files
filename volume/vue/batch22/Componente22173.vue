<template>
  <section class="panel-22173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22173");
const base = ref(22173);
const total = computed(() => base.value * 2);

function incrementar22173() {
  base.value++;
}
</script>
