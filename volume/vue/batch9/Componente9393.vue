<template>
  <section class="panel-9393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9393");
const base = ref(9393);
const total = computed(() => base.value * 2);

function incrementar9393() {
  base.value++;
}
</script>
