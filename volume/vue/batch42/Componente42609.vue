<template>
  <section class="panel-42609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42609");
const base = ref(42609);
const total = computed(() => base.value * 2);

function incrementar42609() {
  base.value++;
}
</script>
