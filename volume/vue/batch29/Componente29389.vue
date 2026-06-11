<template>
  <section class="panel-29389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29389");
const base = ref(29389);
const total = computed(() => base.value * 2);

function incrementar29389() {
  base.value++;
}
</script>
