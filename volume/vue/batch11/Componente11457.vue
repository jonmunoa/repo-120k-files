<template>
  <section class="panel-11457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11457");
const base = ref(11457);
const total = computed(() => base.value * 2);

function incrementar11457() {
  base.value++;
}
</script>
