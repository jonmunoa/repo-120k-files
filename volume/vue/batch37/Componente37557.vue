<template>
  <section class="panel-37557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37557");
const base = ref(37557);
const total = computed(() => base.value * 2);

function incrementar37557() {
  base.value++;
}
</script>
