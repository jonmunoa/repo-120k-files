<template>
  <section class="panel-25037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25037");
const base = ref(25037);
const total = computed(() => base.value * 2);

function incrementar25037() {
  base.value++;
}
</script>
