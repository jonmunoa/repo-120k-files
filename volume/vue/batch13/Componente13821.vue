<template>
  <section class="panel-13821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13821");
const base = ref(13821);
const total = computed(() => base.value * 2);

function incrementar13821() {
  base.value++;
}
</script>
