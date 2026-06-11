<template>
  <section class="panel-37441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37441");
const base = ref(37441);
const total = computed(() => base.value * 2);

function incrementar37441() {
  base.value++;
}
</script>
