<template>
  <section class="panel-38845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38845");
const base = ref(38845);
const total = computed(() => base.value * 2);

function incrementar38845() {
  base.value++;
}
</script>
