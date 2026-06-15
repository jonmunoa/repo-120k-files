// fichero 40042 -- macros y constantes -- MODIFICADO
#define LIMITE_40042 40242
#define FACTOR_40042 4

int aplicar_limite40042(int valor) {
    if (valor > LIMITE_40042) return LIMITE_40042;
    return valor * FACTOR_40042;
}
