<template>
  <section class="panel-22037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22037");
const base = ref(22037);
const total = computed(() => base.value * 2);

function incrementar22037() {
  base.value++;
}
</script>
