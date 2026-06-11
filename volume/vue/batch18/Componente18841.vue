<template>
  <section class="panel-18841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18841");
const base = ref(18841);
const total = computed(() => base.value * 2);

function incrementar18841() {
  base.value++;
}
</script>
