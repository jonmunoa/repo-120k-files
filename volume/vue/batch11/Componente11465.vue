<template>
  <section class="panel-11465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11465");
const base = ref(11465);
const total = computed(() => base.value * 2);

function incrementar11465() {
  base.value++;
}
</script>
