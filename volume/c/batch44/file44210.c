// fichero 44210 -- macros y constantes -- MODIFICADO
#define LIMITE_44210 44410
#define FACTOR_44210 2

int aplicar_limite44210(int valor) {
    if (valor > LIMITE_44210) return LIMITE_44210;
    return valor * FACTOR_44210;
}
