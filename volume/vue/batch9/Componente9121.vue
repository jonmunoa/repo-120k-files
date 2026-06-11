<template>
  <section class="panel-9121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9121");
const base = ref(9121);
const total = computed(() => base.value * 2);

function incrementar9121() {
  base.value++;
}
</script>
