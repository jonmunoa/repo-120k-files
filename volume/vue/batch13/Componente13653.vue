<template>
  <section class="panel-13653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13653");
const base = ref(13653);
const total = computed(() => base.value * 2);

function incrementar13653() {
  base.value++;
}
</script>
