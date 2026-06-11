<template>
  <section class="panel-35433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35433");
const base = ref(35433);
const total = computed(() => base.value * 2);

function incrementar35433() {
  base.value++;
}
</script>
