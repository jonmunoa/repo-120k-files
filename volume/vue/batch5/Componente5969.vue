<template>
  <section class="panel-5969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5969");
const base = ref(5969);
const total = computed(() => base.value * 2);

function incrementar5969() {
  base.value++;
}
</script>
