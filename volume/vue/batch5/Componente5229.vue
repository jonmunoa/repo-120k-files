<template>
  <section class="panel-5229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5229");
const base = ref(5229);
const total = computed(() => base.value * 2);

function incrementar5229() {
  base.value++;
}
</script>
