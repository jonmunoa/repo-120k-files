<template>
  <section class="panel-5921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5921");
const base = ref(5921);
const total = computed(() => base.value * 2);

function incrementar5921() {
  base.value++;
}
</script>
