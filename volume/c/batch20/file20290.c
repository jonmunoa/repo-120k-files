// fichero 20290 -- macros y constantes -- MODIFICADO
#define LIMITE_20290 20490
#define FACTOR_20290 2

int aplicar_limite20290(int valor) {
    if (valor > LIMITE_20290) return LIMITE_20290;
    return valor * FACTOR_20290;
}
