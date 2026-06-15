// fichero 41042 -- macros y constantes -- MODIFICADO
#define LIMITE_41042 41242
#define FACTOR_41042 4

int aplicar_limite41042(int valor) {
    if (valor > LIMITE_41042) return LIMITE_41042;
    return valor * FACTOR_41042;
}
