<template>
  <section class="panel-33121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33121");
const base = ref(33121);
const total = computed(() => base.value * 2);

function incrementar33121() {
  base.value++;
}
</script>
