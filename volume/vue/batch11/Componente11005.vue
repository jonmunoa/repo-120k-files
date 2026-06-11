<template>
  <section class="panel-11005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11005");
const base = ref(11005);
const total = computed(() => base.value * 2);

function incrementar11005() {
  base.value++;
}
</script>
