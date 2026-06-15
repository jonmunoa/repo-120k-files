// fichero 17966 -- macros y constantes -- MODIFICADO
#define LIMITE_17966 18166
#define FACTOR_17966 3

int aplicar_limite17966(int valor) {
    if (valor > LIMITE_17966) return LIMITE_17966;
    return valor * FACTOR_17966;
}
