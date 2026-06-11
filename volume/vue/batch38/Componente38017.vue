<template>
  <section class="panel-38017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38017");
const base = ref(38017);
const total = computed(() => base.value * 2);

function incrementar38017() {
  base.value++;
}
</script>
