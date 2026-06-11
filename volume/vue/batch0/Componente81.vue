<template>
  <section class="panel-81">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 81");
const base = ref(81);
const total = computed(() => base.value * 2);

function incrementar81() {
  base.value++;
}
</script>
