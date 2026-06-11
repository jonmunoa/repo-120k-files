<template>
  <section class="panel-31777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31777");
const base = ref(31777);
const total = computed(() => base.value * 2);

function incrementar31777() {
  base.value++;
}
</script>
