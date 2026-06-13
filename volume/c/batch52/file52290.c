// fichero 52290 -- macros y constantes
#define LIMITE_52290 52390
#define FACTOR_52290 1

int aplicar_limite52290(int valor) {
    if (valor > LIMITE_52290) return LIMITE_52290;
    return valor * FACTOR_52290;
}
