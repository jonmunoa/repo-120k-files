// fichero 19370 -- macros y constantes -- MODIFICADO
#define LIMITE_19370 19570
#define FACTOR_19370 2

int aplicar_limite19370(int valor) {
    if (valor > LIMITE_19370) return LIMITE_19370;
    return valor * FACTOR_19370;
}
