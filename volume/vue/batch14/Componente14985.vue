<template>
  <section class="panel-14985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14985");
const base = ref(14985);
const total = computed(() => base.value * 2);

function incrementar14985() {
  base.value++;
}
</script>
