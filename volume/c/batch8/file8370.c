// fichero 8370 -- macros y constantes -- MODIFICADO
#define LIMITE_8370 8570
#define FACTOR_8370 2

int aplicar_limite8370(int valor) {
    if (valor > LIMITE_8370) return LIMITE_8370;
    return valor * FACTOR_8370;
}
