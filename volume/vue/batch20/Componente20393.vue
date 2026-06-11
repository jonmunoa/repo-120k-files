<template>
  <section class="panel-20393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20393");
const base = ref(20393);
const total = computed(() => base.value * 2);

function incrementar20393() {
  base.value++;
}
</script>
