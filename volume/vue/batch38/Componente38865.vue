<template>
  <section class="panel-38865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38865");
const base = ref(38865);
const total = computed(() => base.value * 2);

function incrementar38865() {
  base.value++;
}
</script>
