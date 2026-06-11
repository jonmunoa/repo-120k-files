<template>
  <section class="panel-56941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56941");
const base = ref(56941);
const total = computed(() => base.value * 2);

function incrementar56941() {
  base.value++;
}
</script>
