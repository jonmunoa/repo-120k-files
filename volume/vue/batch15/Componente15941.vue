<template>
  <section class="panel-15941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15941");
const base = ref(15941);
const total = computed(() => base.value * 2);

function incrementar15941() {
  base.value++;
}
</script>
