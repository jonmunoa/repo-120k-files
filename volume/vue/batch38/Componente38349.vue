<template>
  <section class="panel-38349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38349");
const base = ref(38349);
const total = computed(() => base.value * 2);

function incrementar38349() {
  base.value++;
}
</script>
