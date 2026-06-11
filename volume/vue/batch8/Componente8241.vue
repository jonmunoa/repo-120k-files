<template>
  <section class="panel-8241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8241");
const base = ref(8241);
const total = computed(() => base.value * 2);

function incrementar8241() {
  base.value++;
}
</script>
