<template>
  <section class="panel-31389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31389");
const base = ref(31389);
const total = computed(() => base.value * 2);

function incrementar31389() {
  base.value++;
}
</script>
