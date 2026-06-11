<template>
  <section class="panel-22121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22121");
const base = ref(22121);
const total = computed(() => base.value * 2);

function incrementar22121() {
  base.value++;
}
</script>
