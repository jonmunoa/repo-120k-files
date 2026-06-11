<template>
  <section class="panel-17389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17389");
const base = ref(17389);
const total = computed(() => base.value * 2);

function incrementar17389() {
  base.value++;
}
</script>
