<template>
  <section class="panel-6017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6017");
const base = ref(6017);
const total = computed(() => base.value * 2);

function incrementar6017() {
  base.value++;
}
</script>
