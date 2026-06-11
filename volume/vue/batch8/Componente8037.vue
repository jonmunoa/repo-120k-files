<template>
  <section class="panel-8037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8037");
const base = ref(8037);
const total = computed(() => base.value * 2);

function incrementar8037() {
  base.value++;
}
</script>
