<template>
  <section class="panel-40841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40841");
const base = ref(40841);
const total = computed(() => base.value * 2);

function incrementar40841() {
  base.value++;
}
</script>
