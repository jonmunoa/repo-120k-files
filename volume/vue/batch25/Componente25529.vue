<template>
  <section class="panel-25529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25529");
const base = ref(25529);
const total = computed(() => base.value * 2);

function incrementar25529() {
  base.value++;
}
</script>
