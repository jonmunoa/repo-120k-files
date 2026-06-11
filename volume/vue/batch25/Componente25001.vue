<template>
  <section class="panel-25001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25001");
const base = ref(25001);
const total = computed(() => base.value * 2);

function incrementar25001() {
  base.value++;
}
</script>
