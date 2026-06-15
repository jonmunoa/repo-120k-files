// fichero 31786 -- macros y constantes -- MODIFICADO
#define LIMITE_31786 31986
#define FACTOR_31786 3

int aplicar_limite31786(int valor) {
    if (valor > LIMITE_31786) return LIMITE_31786;
    return valor * FACTOR_31786;
}
