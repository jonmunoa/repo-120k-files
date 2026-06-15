// fichero 13786 -- macros y constantes -- MODIFICADO
#define LIMITE_13786 13986
#define FACTOR_13786 3

int aplicar_limite13786(int valor) {
    if (valor > LIMITE_13786) return LIMITE_13786;
    return valor * FACTOR_13786;
}
