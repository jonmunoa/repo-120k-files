// fichero 36042 -- macros y constantes -- MODIFICADO
#define LIMITE_36042 36242
#define FACTOR_36042 4

int aplicar_limite36042(int valor) {
    if (valor > LIMITE_36042) return LIMITE_36042;
    return valor * FACTOR_36042;
}
