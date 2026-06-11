<template>
  <section class="panel-38941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38941");
const base = ref(38941);
const total = computed(() => base.value * 2);

function incrementar38941() {
  base.value++;
}
</script>
