// fichero 5174 -- macros y constantes -- MODIFICADO
#define LIMITE_5174 5374
#define FACTOR_5174 6

int aplicar_limite5174(int valor) {
    if (valor > LIMITE_5174) return LIMITE_5174;
    return valor * FACTOR_5174;
}
