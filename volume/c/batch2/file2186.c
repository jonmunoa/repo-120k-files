// fichero 2186 -- macros y constantes -- MODIFICADO
#define LIMITE_2186 2386
#define FACTOR_2186 3

int aplicar_limite2186(int valor) {
    if (valor > LIMITE_2186) return LIMITE_2186;
    return valor * FACTOR_2186;
}
