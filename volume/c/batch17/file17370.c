// fichero 17370 -- macros y constantes -- MODIFICADO
#define LIMITE_17370 17570
#define FACTOR_17370 2

int aplicar_limite17370(int valor) {
    if (valor > LIMITE_17370) return LIMITE_17370;
    return valor * FACTOR_17370;
}
