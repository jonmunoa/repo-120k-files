<template>
  <section class="panel-16869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16869");
const base = ref(16869);
const total = computed(() => base.value * 2);

function incrementar16869() {
  base.value++;
}
</script>
