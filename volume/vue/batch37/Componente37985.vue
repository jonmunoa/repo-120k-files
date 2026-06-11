<template>
  <section class="panel-37985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37985");
const base = ref(37985);
const total = computed(() => base.value * 2);

function incrementar37985() {
  base.value++;
}
</script>
