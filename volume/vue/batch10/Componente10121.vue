<template>
  <section class="panel-10121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10121");
const base = ref(10121);
const total = computed(() => base.value * 2);

function incrementar10121() {
  base.value++;
}
</script>
