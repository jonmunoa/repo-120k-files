// fichero 20062 -- macros y constantes -- MODIFICADO
#define LIMITE_20062 20262
#define FACTOR_20062 4

int aplicar_limite20062(int valor) {
    if (valor > LIMITE_20062) return LIMITE_20062;
    return valor * FACTOR_20062;
}
