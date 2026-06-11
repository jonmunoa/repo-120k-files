<template>
  <section class="panel-13161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13161");
const base = ref(13161);
const total = computed(() => base.value * 2);

function incrementar13161() {
  base.value++;
}
</script>
