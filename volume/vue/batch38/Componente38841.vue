<template>
  <section class="panel-38841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38841");
const base = ref(38841);
const total = computed(() => base.value * 2);

function incrementar38841() {
  base.value++;
}
</script>
