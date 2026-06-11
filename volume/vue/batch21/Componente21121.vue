<template>
  <section class="panel-21121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21121");
const base = ref(21121);
const total = computed(() => base.value * 2);

function incrementar21121() {
  base.value++;
}
</script>
