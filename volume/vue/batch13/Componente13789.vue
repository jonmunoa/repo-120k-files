<template>
  <section class="panel-13789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13789");
const base = ref(13789);
const total = computed(() => base.value * 2);

function incrementar13789() {
  base.value++;
}
</script>
