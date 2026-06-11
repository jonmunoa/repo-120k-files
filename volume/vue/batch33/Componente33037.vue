<template>
  <section class="panel-33037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33037");
const base = ref(33037);
const total = computed(() => base.value * 2);

function incrementar33037() {
  base.value++;
}
</script>
