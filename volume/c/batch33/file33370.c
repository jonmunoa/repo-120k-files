// fichero 33370 -- macros y constantes
#define LIMITE_33370 33470
#define FACTOR_33370 1

int aplicar_limite33370(int valor) {
    if (valor > LIMITE_33370) return LIMITE_33370;
    return valor * FACTOR_33370;
}
