// fichero 35174 -- macros y constantes
#define LIMITE_35174 35274
#define FACTOR_35174 5

int aplicar_limite35174(int valor) {
    if (valor > LIMITE_35174) return LIMITE_35174;
    return valor * FACTOR_35174;
}
