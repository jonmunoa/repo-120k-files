<template>
  <section class="panel-11441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11441");
const base = ref(11441);
const total = computed(() => base.value * 2);

function incrementar11441() {
  base.value++;
}
</script>
