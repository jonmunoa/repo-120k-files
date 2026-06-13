// fichero 23370 -- macros y constantes
#define LIMITE_23370 23470
#define FACTOR_23370 1

int aplicar_limite23370(int valor) {
    if (valor > LIMITE_23370) return LIMITE_23370;
    return valor * FACTOR_23370;
}
