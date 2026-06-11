<template>
  <section class="panel-57333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57333");
const base = ref(57333);
const total = computed(() => base.value * 2);

function incrementar57333() {
  base.value++;
}
</script>
