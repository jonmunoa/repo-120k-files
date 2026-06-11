<template>
  <section class="panel-34557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34557");
const base = ref(34557);
const total = computed(() => base.value * 2);

function incrementar34557() {
  base.value++;
}
</script>
