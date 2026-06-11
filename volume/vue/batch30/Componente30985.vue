<template>
  <section class="panel-30985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30985");
const base = ref(30985);
const total = computed(() => base.value * 2);

function incrementar30985() {
  base.value++;
}
</script>
