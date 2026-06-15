// fichero 24026 -- macros y constantes -- MODIFICADO
#define LIMITE_24026 24226
#define FACTOR_24026 3

int aplicar_limite24026(int valor) {
    if (valor > LIMITE_24026) return LIMITE_24026;
    return valor * FACTOR_24026;
}
