<template>
  <section class="panel-3985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3985");
const base = ref(3985);
const total = computed(() => base.value * 2);

function incrementar3985() {
  base.value++;
}
</script>
