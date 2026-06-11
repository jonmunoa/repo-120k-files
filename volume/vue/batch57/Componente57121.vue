<template>
  <section class="panel-57121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57121");
const base = ref(57121);
const total = computed(() => base.value * 2);

function incrementar57121() {
  base.value++;
}
</script>
