<template>
  <section class="panel-38421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38421");
const base = ref(38421);
const total = computed(() => base.value * 2);

function incrementar38421() {
  base.value++;
}
</script>
