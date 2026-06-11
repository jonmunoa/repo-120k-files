<template>
  <section class="panel-11113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11113");
const base = ref(11113);
const total = computed(() => base.value * 2);

function incrementar11113() {
  base.value++;
}
</script>
