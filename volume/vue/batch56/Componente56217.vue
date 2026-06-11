<template>
  <section class="panel-56217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56217");
const base = ref(56217);
const total = computed(() => base.value * 2);

function incrementar56217() {
  base.value++;
}
</script>
