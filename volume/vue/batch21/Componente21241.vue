<template>
  <section class="panel-21241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21241");
const base = ref(21241);
const total = computed(() => base.value * 2);

function incrementar21241() {
  base.value++;
}
</script>
