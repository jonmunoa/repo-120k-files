<template>
  <section class="panel-38769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38769");
const base = ref(38769);
const total = computed(() => base.value * 2);

function incrementar38769() {
  base.value++;
}
</script>
