<template>
  <section class="panel-13893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13893");
const base = ref(13893);
const total = computed(() => base.value * 2);

function incrementar13893() {
  base.value++;
}
</script>
