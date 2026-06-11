<template>
  <section class="panel-97">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 97");
const base = ref(97);
const total = computed(() => base.value * 2);

function incrementar97() {
  base.value++;
}
</script>
