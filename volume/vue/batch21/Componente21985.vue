<template>
  <section class="panel-21985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21985");
const base = ref(21985);
const total = computed(() => base.value * 2);

function incrementar21985() {
  base.value++;
}
</script>
