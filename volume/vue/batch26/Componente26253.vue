<template>
  <section class="panel-26253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26253");
const base = ref(26253);
const total = computed(() => base.value * 2);

function incrementar26253() {
  base.value++;
}
</script>
