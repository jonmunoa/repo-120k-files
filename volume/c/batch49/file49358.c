// fichero 49358 -- macros y constantes
#define LIMITE_49358 49458
#define FACTOR_49358 4

int aplicar_limite49358(int valor) {
    if (valor > LIMITE_49358) return LIMITE_49358;
    return valor * FACTOR_49358;
}
