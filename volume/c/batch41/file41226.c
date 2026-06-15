// fichero 41226 -- macros y constantes -- MODIFICADO
#define LIMITE_41226 41426
#define FACTOR_41226 3

int aplicar_limite41226(int valor) {
    if (valor > LIMITE_41226) return LIMITE_41226;
    return valor * FACTOR_41226;
}
