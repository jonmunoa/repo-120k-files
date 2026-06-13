// fichero 25370 -- macros y constantes
#define LIMITE_25370 25470
#define FACTOR_25370 1

int aplicar_limite25370(int valor) {
    if (valor > LIMITE_25370) return LIMITE_25370;
    return valor * FACTOR_25370;
}
