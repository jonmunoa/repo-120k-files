<template>
  <section class="panel-45941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45941");
const base = ref(45941);
const total = computed(() => base.value * 2);

function incrementar45941() {
  base.value++;
}
</script>
