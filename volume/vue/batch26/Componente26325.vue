<template>
  <section class="panel-26325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26325");
const base = ref(26325);
const total = computed(() => base.value * 2);

function incrementar26325() {
  base.value++;
}
</script>
