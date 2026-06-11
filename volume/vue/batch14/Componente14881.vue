<template>
  <section class="panel-14881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14881");
const base = ref(14881);
const total = computed(() => base.value * 2);

function incrementar14881() {
  base.value++;
}
</script>
