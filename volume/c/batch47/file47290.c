// fichero 47290 -- macros y constantes -- MODIFICADO
#define LIMITE_47290 47490
#define FACTOR_47290 2

int aplicar_limite47290(int valor) {
    if (valor > LIMITE_47290) return LIMITE_47290;
    return valor * FACTOR_47290;
}
