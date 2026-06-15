// fichero 2226 -- macros y constantes -- MODIFICADO
#define LIMITE_2226 2426
#define FACTOR_2226 3

int aplicar_limite2226(int valor) {
    if (valor > LIMITE_2226) return LIMITE_2226;
    return valor * FACTOR_2226;
}
