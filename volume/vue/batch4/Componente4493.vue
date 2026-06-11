<template>
  <section class="panel-4493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4493");
const base = ref(4493);
const total = computed(() => base.value * 2);

function incrementar4493() {
  base.value++;
}
</script>
