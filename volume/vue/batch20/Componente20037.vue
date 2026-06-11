<template>
  <section class="panel-20037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20037");
const base = ref(20037);
const total = computed(() => base.value * 2);

function incrementar20037() {
  base.value++;
}
</script>
