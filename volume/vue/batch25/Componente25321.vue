<template>
  <section class="panel-25321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25321");
const base = ref(25321);
const total = computed(() => base.value * 2);

function incrementar25321() {
  base.value++;
}
</script>
