<template>
  <section class="panel-37021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37021");
const base = ref(37021);
const total = computed(() => base.value * 2);

function incrementar37021() {
  base.value++;
}
</script>
