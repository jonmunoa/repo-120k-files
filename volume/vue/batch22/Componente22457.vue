<template>
  <section class="panel-22457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22457");
const base = ref(22457);
const total = computed(() => base.value * 2);

function incrementar22457() {
  base.value++;
}
</script>
