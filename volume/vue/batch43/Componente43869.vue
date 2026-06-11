<template>
  <section class="panel-43869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43869");
const base = ref(43869);
const total = computed(() => base.value * 2);

function incrementar43869() {
  base.value++;
}
</script>
