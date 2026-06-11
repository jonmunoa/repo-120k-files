<template>
  <section class="panel-30193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30193");
const base = ref(30193);
const total = computed(() => base.value * 2);

function incrementar30193() {
  base.value++;
}
</script>
