<template>
  <section class="panel-57745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57745");
const base = ref(57745);
const total = computed(() => base.value * 2);

function incrementar57745() {
  base.value++;
}
</script>
