<template>
  <section class="panel-57857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57857");
const base = ref(57857);
const total = computed(() => base.value * 2);

function incrementar57857() {
  base.value++;
}
</script>
