<template>
  <section class="panel-38921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38921");
const base = ref(38921);
const total = computed(() => base.value * 2);

function incrementar38921() {
  base.value++;
}
</script>
