// fichero 44046 -- macros y constantes -- MODIFICADO
#define LIMITE_44046 44246
#define FACTOR_44046 3

int aplicar_limite44046(int valor) {
    if (valor > LIMITE_44046) return LIMITE_44046;
    return valor * FACTOR_44046;
}
