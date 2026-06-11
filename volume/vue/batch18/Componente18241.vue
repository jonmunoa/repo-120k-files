<template>
  <section class="panel-18241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18241");
const base = ref(18241);
const total = computed(() => base.value * 2);

function incrementar18241() {
  base.value++;
}
</script>
