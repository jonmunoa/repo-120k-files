<template>
  <section class="panel-10173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10173");
const base = ref(10173);
const total = computed(() => base.value * 2);

function incrementar10173() {
  base.value++;
}
</script>
