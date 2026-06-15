// fichero 48062 -- macros y constantes -- MODIFICADO
#define LIMITE_48062 48262
#define FACTOR_48062 4

int aplicar_limite48062(int valor) {
    if (valor > LIMITE_48062) return LIMITE_48062;
    return valor * FACTOR_48062;
}
