<template>
  <section class="panel-38037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38037");
const base = ref(38037);
const total = computed(() => base.value * 2);

function incrementar38037() {
  base.value++;
}
</script>
