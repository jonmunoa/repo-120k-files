// fichero 20790 -- macros y constantes -- MODIFICADO
#define LIMITE_20790 20990
#define FACTOR_20790 2

int aplicar_limite20790(int valor) {
    if (valor > LIMITE_20790) return LIMITE_20790;
    return valor * FACTOR_20790;
}
