// fichero 8226 -- macros y constantes -- MODIFICADO
#define LIMITE_8226 8426
#define FACTOR_8226 3

int aplicar_limite8226(int valor) {
    if (valor > LIMITE_8226) return LIMITE_8226;
    return valor * FACTOR_8226;
}
