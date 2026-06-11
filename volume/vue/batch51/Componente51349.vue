<template>
  <section class="panel-51349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51349");
const base = ref(51349);
const total = computed(() => base.value * 2);

function incrementar51349() {
  base.value++;
}
</script>
