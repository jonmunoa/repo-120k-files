// fichero 24786 -- macros y constantes -- MODIFICADO
#define LIMITE_24786 24986
#define FACTOR_24786 3

int aplicar_limite24786(int valor) {
    if (valor > LIMITE_24786) return LIMITE_24786;
    return valor * FACTOR_24786;
}
