<template>
  <section class="panel-42277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42277");
const base = ref(42277);
const total = computed(() => base.value * 2);

function incrementar42277() {
  base.value++;
}
</script>
