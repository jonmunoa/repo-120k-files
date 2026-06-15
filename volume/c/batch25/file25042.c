// fichero 25042 -- macros y constantes -- MODIFICADO
#define LIMITE_25042 25242
#define FACTOR_25042 4

int aplicar_limite25042(int valor) {
    if (valor > LIMITE_25042) return LIMITE_25042;
    return valor * FACTOR_25042;
}
