<template>
  <section class="panel-57577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57577");
const base = ref(57577);
const total = computed(() => base.value * 2);

function incrementar57577() {
  base.value++;
}
</script>
