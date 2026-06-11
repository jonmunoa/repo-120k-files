<template>
  <section class="panel-13037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13037");
const base = ref(13037);
const total = computed(() => base.value * 2);

function incrementar13037() {
  base.value++;
}
</script>
