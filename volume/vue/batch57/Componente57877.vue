<template>
  <section class="panel-57877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57877");
const base = ref(57877);
const total = computed(() => base.value * 2);

function incrementar57877() {
  base.value++;
}
</script>
