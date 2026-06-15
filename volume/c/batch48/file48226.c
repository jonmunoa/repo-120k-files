// fichero 48226 -- macros y constantes -- MODIFICADO
#define LIMITE_48226 48426
#define FACTOR_48226 3

int aplicar_limite48226(int valor) {
    if (valor > LIMITE_48226) return LIMITE_48226;
    return valor * FACTOR_48226;
}
