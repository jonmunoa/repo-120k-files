// fichero 5790 -- macros y constantes -- MODIFICADO
#define LIMITE_5790 5990
#define FACTOR_5790 2

int aplicar_limite5790(int valor) {
    if (valor > LIMITE_5790) return LIMITE_5790;
    return valor * FACTOR_5790;
}
