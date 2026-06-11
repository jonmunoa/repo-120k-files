<template>
  <section class="panel-44121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44121");
const base = ref(44121);
const total = computed(() => base.value * 2);

function incrementar44121() {
  base.value++;
}
</script>
