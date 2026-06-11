<template>
  <section class="panel-15985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15985");
const base = ref(15985);
const total = computed(() => base.value * 2);

function incrementar15985() {
  base.value++;
}
</script>
