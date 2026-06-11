<template>
  <section class="panel-28037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28037");
const base = ref(28037);
const total = computed(() => base.value * 2);

function incrementar28037() {
  base.value++;
}
</script>
