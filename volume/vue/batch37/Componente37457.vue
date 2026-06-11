<template>
  <section class="panel-37457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37457");
const base = ref(37457);
const total = computed(() => base.value * 2);

function incrementar37457() {
  base.value++;
}
</script>
