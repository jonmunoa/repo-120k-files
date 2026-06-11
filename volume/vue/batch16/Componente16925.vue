<template>
  <section class="panel-16925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16925");
const base = ref(16925);
const total = computed(() => base.value * 2);

function incrementar16925() {
  base.value++;
}
</script>
