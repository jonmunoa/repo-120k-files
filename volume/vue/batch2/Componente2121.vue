<template>
  <section class="panel-2121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2121");
const base = ref(2121);
const total = computed(() => base.value * 2);

function incrementar2121() {
  base.value++;
}
</script>
