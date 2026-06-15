// fichero 24042 -- macros y constantes -- MODIFICADO
#define LIMITE_24042 24242
#define FACTOR_24042 4

int aplicar_limite24042(int valor) {
    if (valor > LIMITE_24042) return LIMITE_24042;
    return valor * FACTOR_24042;
}
