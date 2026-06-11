<template>
  <section class="panel-25513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25513");
const base = ref(25513);
const total = computed(() => base.value * 2);

function incrementar25513() {
  base.value++;
}
</script>
