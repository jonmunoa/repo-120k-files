<template>
  <section class="panel-47217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47217");
const base = ref(47217);
const total = computed(() => base.value * 2);

function incrementar47217() {
  base.value++;
}
</script>
