<template>
  <section class="panel-25065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25065");
const base = ref(25065);
const total = computed(() => base.value * 2);

function incrementar25065() {
  base.value++;
}
</script>
