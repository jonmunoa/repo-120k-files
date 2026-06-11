<template>
  <section class="panel-50037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50037");
const base = ref(50037);
const total = computed(() => base.value * 2);

function incrementar50037() {
  base.value++;
}
</script>
