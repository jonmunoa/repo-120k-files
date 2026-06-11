<template>
  <section class="panel-45521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45521");
const base = ref(45521);
const total = computed(() => base.value * 2);

function incrementar45521() {
  base.value++;
}
</script>
