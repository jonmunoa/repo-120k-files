<template>
  <section class="panel-51389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51389");
const base = ref(51389);
const total = computed(() => base.value * 2);

function incrementar51389() {
  base.value++;
}
</script>
