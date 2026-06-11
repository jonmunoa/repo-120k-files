<template>
  <section class="panel-5657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5657");
const base = ref(5657);
const total = computed(() => base.value * 2);

function incrementar5657() {
  base.value++;
}
</script>
