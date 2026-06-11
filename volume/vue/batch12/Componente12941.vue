<template>
  <section class="panel-12941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12941");
const base = ref(12941);
const total = computed(() => base.value * 2);

function incrementar12941() {
  base.value++;
}
</script>
