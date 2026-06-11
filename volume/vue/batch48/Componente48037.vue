<template>
  <section class="panel-48037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48037");
const base = ref(48037);
const total = computed(() => base.value * 2);

function incrementar48037() {
  base.value++;
}
</script>
