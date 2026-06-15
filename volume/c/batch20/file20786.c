// fichero 20786 -- macros y constantes -- MODIFICADO
#define LIMITE_20786 20986
#define FACTOR_20786 3

int aplicar_limite20786(int valor) {
    if (valor > LIMITE_20786) return LIMITE_20786;
    return valor * FACTOR_20786;
}
