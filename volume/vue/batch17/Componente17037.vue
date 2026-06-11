<template>
  <section class="panel-17037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17037");
const base = ref(17037);
const total = computed(() => base.value * 2);

function incrementar17037() {
  base.value++;
}
</script>
