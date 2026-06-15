// fichero 49226 -- macros y constantes -- MODIFICADO
#define LIMITE_49226 49426
#define FACTOR_49226 3

int aplicar_limite49226(int valor) {
    if (valor > LIMITE_49226) return LIMITE_49226;
    return valor * FACTOR_49226;
}
