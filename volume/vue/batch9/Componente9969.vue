<template>
  <section class="panel-9969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9969");
const base = ref(9969);
const total = computed(() => base.value * 2);

function incrementar9969() {
  base.value++;
}
</script>
