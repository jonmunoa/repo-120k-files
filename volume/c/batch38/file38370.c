// fichero 38370 -- macros y constantes
#define LIMITE_38370 38470
#define FACTOR_38370 1

int aplicar_limite38370(int valor) {
    if (valor > LIMITE_38370) return LIMITE_38370;
    return valor * FACTOR_38370;
}
