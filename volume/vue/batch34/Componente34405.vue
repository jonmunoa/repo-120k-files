<template>
  <section class="panel-34405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34405");
const base = ref(34405);
const total = computed(() => base.value * 2);

function incrementar34405() {
  base.value++;
}
</script>
