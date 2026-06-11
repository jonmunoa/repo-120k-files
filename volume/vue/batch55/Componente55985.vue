<template>
  <section class="panel-55985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55985");
const base = ref(55985);
const total = computed(() => base.value * 2);

function incrementar55985() {
  base.value++;
}
</script>
