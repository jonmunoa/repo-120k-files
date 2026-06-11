<template>
  <section class="panel-13273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13273");
const base = ref(13273);
const total = computed(() => base.value * 2);

function incrementar13273() {
  base.value++;
}
</script>
