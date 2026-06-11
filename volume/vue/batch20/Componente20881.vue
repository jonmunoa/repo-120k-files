<template>
  <section class="panel-20881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20881");
const base = ref(20881);
const total = computed(() => base.value * 2);

function incrementar20881() {
  base.value++;
}
</script>
