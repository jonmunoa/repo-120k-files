<template>
  <section class="panel-49669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49669");
const base = ref(49669);
const total = computed(() => base.value * 2);

function incrementar49669() {
  base.value++;
}
</script>
