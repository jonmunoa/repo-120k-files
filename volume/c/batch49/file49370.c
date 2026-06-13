// fichero 49370 -- macros y constantes
#define LIMITE_49370 49470
#define FACTOR_49370 1

int aplicar_limite49370(int valor) {
    if (valor > LIMITE_49370) return LIMITE_49370;
    return valor * FACTOR_49370;
}
