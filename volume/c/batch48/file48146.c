// fichero 48146 -- macros y constantes -- MODIFICADO
#define LIMITE_48146 48346
#define FACTOR_48146 3

int aplicar_limite48146(int valor) {
    if (valor > LIMITE_48146) return LIMITE_48146;
    return valor * FACTOR_48146;
}
