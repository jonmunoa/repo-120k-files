<template>
  <section class="panel-25241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25241");
const base = ref(25241);
const total = computed(() => base.value * 2);

function incrementar25241() {
  base.value++;
}
</script>
