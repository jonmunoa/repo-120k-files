<template>
  <section class="panel-13937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13937");
const base = ref(13937);
const total = computed(() => base.value * 2);

function incrementar13937() {
  base.value++;
}
</script>
