<template>
  <section class="panel-14049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14049");
const base = ref(14049);
const total = computed(() => base.value * 2);

function incrementar14049() {
  base.value++;
}
</script>
