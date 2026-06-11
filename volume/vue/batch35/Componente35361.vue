<template>
  <section class="panel-35361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35361");
const base = ref(35361);
const total = computed(() => base.value * 2);

function incrementar35361() {
  base.value++;
}
</script>
