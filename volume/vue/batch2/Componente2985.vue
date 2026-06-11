<template>
  <section class="panel-2985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2985");
const base = ref(2985);
const total = computed(() => base.value * 2);

function incrementar2985() {
  base.value++;
}
</script>
