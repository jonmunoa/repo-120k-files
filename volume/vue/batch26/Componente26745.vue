<template>
  <section class="panel-26745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26745");
const base = ref(26745);
const total = computed(() => base.value * 2);

function incrementar26745() {
  base.value++;
}
</script>
