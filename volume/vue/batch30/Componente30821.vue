<template>
  <section class="panel-30821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30821");
const base = ref(30821);
const total = computed(() => base.value * 2);

function incrementar30821() {
  base.value++;
}
</script>
