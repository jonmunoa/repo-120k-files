// fichero 44210 -- macros y constantes
#define LIMITE_44210 44310
#define FACTOR_44210 1

int aplicar_limite44210(int valor) {
    if (valor > LIMITE_44210) return LIMITE_44210;
    return valor * FACTOR_44210;
}
