<template>
  <section class="panel-41241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41241");
const base = ref(41241);
const total = computed(() => base.value * 2);

function incrementar41241() {
  base.value++;
}
</script>
