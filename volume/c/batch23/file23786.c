// fichero 23786 -- macros y constantes -- MODIFICADO
#define LIMITE_23786 23986
#define FACTOR_23786 3

int aplicar_limite23786(int valor) {
    if (valor > LIMITE_23786) return LIMITE_23786;
    return valor * FACTOR_23786;
}
