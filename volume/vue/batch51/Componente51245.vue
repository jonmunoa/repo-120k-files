<template>
  <section class="panel-51245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51245");
const base = ref(51245);
const total = computed(() => base.value * 2);

function incrementar51245() {
  base.value++;
}
</script>
