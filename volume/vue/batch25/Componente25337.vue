<template>
  <section class="panel-25337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25337");
const base = ref(25337);
const total = computed(() => base.value * 2);

function incrementar25337() {
  base.value++;
}
</script>
