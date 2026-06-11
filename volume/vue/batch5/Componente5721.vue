<template>
  <section class="panel-5721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5721");
const base = ref(5721);
const total = computed(() => base.value * 2);

function incrementar5721() {
  base.value++;
}
</script>
