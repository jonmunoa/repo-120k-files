<template>
  <section class="panel-797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 797");
const base = ref(797);
const total = computed(() => base.value * 2);

function incrementar797() {
  base.value++;
}
</script>
