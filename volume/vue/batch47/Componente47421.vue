<template>
  <section class="panel-47421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47421");
const base = ref(47421);
const total = computed(() => base.value * 2);

function incrementar47421() {
  base.value++;
}
</script>
