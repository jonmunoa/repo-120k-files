<template>
  <section class="panel-13877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13877");
const base = ref(13877);
const total = computed(() => base.value * 2);

function incrementar13877() {
  base.value++;
}
</script>
