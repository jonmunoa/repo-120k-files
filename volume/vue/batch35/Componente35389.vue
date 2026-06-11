<template>
  <section class="panel-35389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35389");
const base = ref(35389);
const total = computed(() => base.value * 2);

function incrementar35389() {
  base.value++;
}
</script>
