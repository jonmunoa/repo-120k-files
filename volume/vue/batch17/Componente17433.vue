<template>
  <section class="panel-17433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17433");
const base = ref(17433);
const total = computed(() => base.value * 2);

function incrementar17433() {
  base.value++;
}
</script>
