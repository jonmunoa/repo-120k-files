<template>
  <section class="panel-14457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14457");
const base = ref(14457);
const total = computed(() => base.value * 2);

function incrementar14457() {
  base.value++;
}
</script>
