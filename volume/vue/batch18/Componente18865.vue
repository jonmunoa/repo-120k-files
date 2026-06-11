<template>
  <section class="panel-18865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18865");
const base = ref(18865);
const total = computed(() => base.value * 2);

function incrementar18865() {
  base.value++;
}
</script>
