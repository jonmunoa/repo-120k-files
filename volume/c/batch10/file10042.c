// fichero 10042 -- macros y constantes -- MODIFICADO
#define LIMITE_10042 10242
#define FACTOR_10042 4

int aplicar_limite10042(int valor) {
    if (valor > LIMITE_10042) return LIMITE_10042;
    return valor * FACTOR_10042;
}
