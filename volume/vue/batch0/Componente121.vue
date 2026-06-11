<template>
  <section class="panel-121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 121");
const base = ref(121);
const total = computed(() => base.value * 2);

function incrementar121() {
  base.value++;
}
</script>
