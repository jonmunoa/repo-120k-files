<template>
  <section class="panel-2241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2241");
const base = ref(2241);
const total = computed(() => base.value * 2);

function incrementar2241() {
  base.value++;
}
</script>
