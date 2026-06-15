// fichero 2290 -- macros y constantes -- MODIFICADO
#define LIMITE_2290 2490
#define FACTOR_2290 2

int aplicar_limite2290(int valor) {
    if (valor > LIMITE_2290) return LIMITE_2290;
    return valor * FACTOR_2290;
}
