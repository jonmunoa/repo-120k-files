<template>
  <section class="panel-557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 557");
const base = ref(557);
const total = computed(() => base.value * 2);

function incrementar557() {
  base.value++;
}
</script>
