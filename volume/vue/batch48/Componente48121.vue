<template>
  <section class="panel-48121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48121");
const base = ref(48121);
const total = computed(() => base.value * 2);

function incrementar48121() {
  base.value++;
}
</script>
