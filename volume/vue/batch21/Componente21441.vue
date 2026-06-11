<template>
  <section class="panel-21441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21441");
const base = ref(21441);
const total = computed(() => base.value * 2);

function incrementar21441() {
  base.value++;
}
</script>
