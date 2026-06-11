<template>
  <section class="panel-24389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24389");
const base = ref(24389);
const total = computed(() => base.value * 2);

function incrementar24389() {
  base.value++;
}
</script>
