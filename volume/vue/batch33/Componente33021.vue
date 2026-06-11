<template>
  <section class="panel-33021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33021");
const base = ref(33021);
const total = computed(() => base.value * 2);

function incrementar33021() {
  base.value++;
}
</script>
