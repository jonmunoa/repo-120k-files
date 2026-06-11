<template>
  <section class="panel-35065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35065");
const base = ref(35065);
const total = computed(() => base.value * 2);

function incrementar35065() {
  base.value++;
}
</script>
