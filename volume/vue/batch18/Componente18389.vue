<template>
  <section class="panel-18389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18389");
const base = ref(18389);
const total = computed(() => base.value * 2);

function incrementar18389() {
  base.value++;
}
</script>
