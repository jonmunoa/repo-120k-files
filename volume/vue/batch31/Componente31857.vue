<template>
  <section class="panel-31857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31857");
const base = ref(31857);
const total = computed(() => base.value * 2);

function incrementar31857() {
  base.value++;
}
</script>
