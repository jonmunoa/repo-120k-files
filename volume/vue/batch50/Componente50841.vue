<template>
  <section class="panel-50841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50841");
const base = ref(50841);
const total = computed(() => base.value * 2);

function incrementar50841() {
  base.value++;
}
</script>
