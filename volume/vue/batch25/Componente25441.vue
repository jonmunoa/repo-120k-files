<template>
  <section class="panel-25441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25441");
const base = ref(25441);
const total = computed(() => base.value * 2);

function incrementar25441() {
  base.value++;
}
</script>
