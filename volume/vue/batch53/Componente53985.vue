<template>
  <section class="panel-53985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53985");
const base = ref(53985);
const total = computed(() => base.value * 2);

function incrementar53985() {
  base.value++;
}
</script>
