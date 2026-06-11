<template>
  <section class="panel-20361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20361");
const base = ref(20361);
const total = computed(() => base.value * 2);

function incrementar20361() {
  base.value++;
}
</script>
