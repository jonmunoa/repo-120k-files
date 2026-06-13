// fichero 24026 -- macros y constantes
#define LIMITE_24026 24126
#define FACTOR_24026 2

int aplicar_limite24026(int valor) {
    if (valor > LIMITE_24026) return LIMITE_24026;
    return valor * FACTOR_24026;
}
