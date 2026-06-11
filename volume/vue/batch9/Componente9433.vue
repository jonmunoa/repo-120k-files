<template>
  <section class="panel-9433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9433");
const base = ref(9433);
const total = computed(() => base.value * 2);

function incrementar9433() {
  base.value++;
}
</script>
