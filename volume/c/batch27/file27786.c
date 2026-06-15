// fichero 27786 -- macros y constantes -- MODIFICADO
#define LIMITE_27786 27986
#define FACTOR_27786 3

int aplicar_limite27786(int valor) {
    if (valor > LIMITE_27786) return LIMITE_27786;
    return valor * FACTOR_27786;
}
