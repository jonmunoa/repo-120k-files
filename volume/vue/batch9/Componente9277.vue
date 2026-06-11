<template>
  <section class="panel-9277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9277");
const base = ref(9277);
const total = computed(() => base.value * 2);

function incrementar9277() {
  base.value++;
}
</script>
