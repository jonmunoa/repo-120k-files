// fichero 39786 -- macros y constantes -- MODIFICADO
#define LIMITE_39786 39986
#define FACTOR_39786 3

int aplicar_limite39786(int valor) {
    if (valor > LIMITE_39786) return LIMITE_39786;
    return valor * FACTOR_39786;
}
