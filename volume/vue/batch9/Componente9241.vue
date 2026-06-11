<template>
  <section class="panel-9241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9241");
const base = ref(9241);
const total = computed(() => base.value * 2);

function incrementar9241() {
  base.value++;
}
</script>
