<template>
  <section class="panel-27941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27941");
const base = ref(27941);
const total = computed(() => base.value * 2);

function incrementar27941() {
  base.value++;
}
</script>
