// fichero 42210 -- macros y constantes -- MODIFICADO
#define LIMITE_42210 42410
#define FACTOR_42210 2

int aplicar_limite42210(int valor) {
    if (valor > LIMITE_42210) return LIMITE_42210;
    return valor * FACTOR_42210;
}
