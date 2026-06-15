// fichero 8838 -- macros y constantes -- MODIFICADO
#define LIMITE_8838 9038
#define FACTOR_8838 5

int aplicar_limite8838(int valor) {
    if (valor > LIMITE_8838) return LIMITE_8838;
    return valor * FACTOR_8838;
}
