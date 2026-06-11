<template>
  <section class="panel-34381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34381");
const base = ref(34381);
const total = computed(() => base.value * 2);

function incrementar34381() {
  base.value++;
}
</script>
