<template>
  <section class="panel-14117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14117");
const base = ref(14117);
const total = computed(() => base.value * 2);

function incrementar14117() {
  base.value++;
}
</script>
