<template>
  <section class="panel-35109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35109");
const base = ref(35109);
const total = computed(() => base.value * 2);

function incrementar35109() {
  base.value++;
}
</script>
