<template>
  <section class="panel-52521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52521");
const base = ref(52521);
const total = computed(() => base.value * 2);

function incrementar52521() {
  base.value++;
}
</script>
