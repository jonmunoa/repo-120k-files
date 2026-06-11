<template>
  <section class="panel-50389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50389");
const base = ref(50389);
const total = computed(() => base.value * 2);

function incrementar50389() {
  base.value++;
}
</script>
