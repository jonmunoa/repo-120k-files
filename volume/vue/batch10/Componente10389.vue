<template>
  <section class="panel-10389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10389");
const base = ref(10389);
const total = computed(() => base.value * 2);

function incrementar10389() {
  base.value++;
}
</script>
