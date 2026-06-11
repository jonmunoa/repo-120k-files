<template>
  <section class="panel-57785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57785");
const base = ref(57785);
const total = computed(() => base.value * 2);

function incrementar57785() {
  base.value++;
}
</script>
