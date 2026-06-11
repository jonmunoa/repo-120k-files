<template>
  <section class="panel-57981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57981");
const base = ref(57981);
const total = computed(() => base.value * 2);

function incrementar57981() {
  base.value++;
}
</script>
