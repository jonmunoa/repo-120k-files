<template>
  <section class="panel-36985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36985");
const base = ref(36985);
const total = computed(() => base.value * 2);

function incrementar36985() {
  base.value++;
}
</script>
