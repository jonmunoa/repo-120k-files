<template>
  <section class="panel-35769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35769");
const base = ref(35769);
const total = computed(() => base.value * 2);

function incrementar35769() {
  base.value++;
}
</script>
