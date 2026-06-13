// fichero 11174 -- macros y constantes
#define LIMITE_11174 11274
#define FACTOR_11174 5

int aplicar_limite11174(int valor) {
    if (valor > LIMITE_11174) return LIMITE_11174;
    return valor * FACTOR_11174;
}
