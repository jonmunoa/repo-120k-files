<template>
  <section class="panel-5277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5277");
const base = ref(5277);
const total = computed(() => base.value * 2);

function incrementar5277() {
  base.value++;
}
</script>
