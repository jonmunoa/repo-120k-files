<template>
  <section class="panel-22645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22645");
const base = ref(22645);
const total = computed(() => base.value * 2);

function incrementar22645() {
  base.value++;
}
</script>
