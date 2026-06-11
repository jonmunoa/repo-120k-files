<template>
  <section class="panel-24441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24441");
const base = ref(24441);
const total = computed(() => base.value * 2);

function incrementar24441() {
  base.value++;
}
</script>
