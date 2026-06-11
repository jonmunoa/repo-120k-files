<template>
  <section class="panel-11389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11389");
const base = ref(11389);
const total = computed(() => base.value * 2);

function incrementar11389() {
  base.value++;
}
</script>
