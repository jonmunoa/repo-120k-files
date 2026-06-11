<template>
  <section class="panel-57109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57109");
const base = ref(57109);
const total = computed(() => base.value * 2);

function incrementar57109() {
  base.value++;
}
</script>
