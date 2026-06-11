<template>
  <section class="panel-20389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20389");
const base = ref(20389);
const total = computed(() => base.value * 2);

function incrementar20389() {
  base.value++;
}
</script>
