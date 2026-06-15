// fichero 25370 -- macros y constantes -- MODIFICADO
#define LIMITE_25370 25570
#define FACTOR_25370 2

int aplicar_limite25370(int valor) {
    if (valor > LIMITE_25370) return LIMITE_25370;
    return valor * FACTOR_25370;
}
