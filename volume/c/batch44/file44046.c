// fichero 44046 -- macros y constantes
#define LIMITE_44046 44146
#define FACTOR_44046 2

int aplicar_limite44046(int valor) {
    if (valor > LIMITE_44046) return LIMITE_44046;
    return valor * FACTOR_44046;
}
