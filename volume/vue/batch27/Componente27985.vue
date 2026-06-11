<template>
  <section class="panel-27985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27985");
const base = ref(27985);
const total = computed(() => base.value * 2);

function incrementar27985() {
  base.value++;
}
</script>
