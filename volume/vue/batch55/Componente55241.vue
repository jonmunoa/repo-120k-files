<template>
  <section class="panel-55241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55241");
const base = ref(55241);
const total = computed(() => base.value * 2);

function incrementar55241() {
  base.value++;
}
</script>
