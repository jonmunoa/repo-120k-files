<template>
  <section class="panel-16193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16193");
const base = ref(16193);
const total = computed(() => base.value * 2);

function incrementar16193() {
  base.value++;
}
</script>
