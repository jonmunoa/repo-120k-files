// fichero 23290 -- macros y constantes -- MODIFICADO
#define LIMITE_23290 23490
#define FACTOR_23290 2

int aplicar_limite23290(int valor) {
    if (valor > LIMITE_23290) return LIMITE_23290;
    return valor * FACTOR_23290;
}
