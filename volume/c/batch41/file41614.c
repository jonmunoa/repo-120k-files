// fichero 41614 -- macros y constantes -- MODIFICADO
#define LIMITE_41614 41814
#define FACTOR_41614 6

int aplicar_limite41614(int valor) {
    if (valor > LIMITE_41614) return LIMITE_41614;
    return valor * FACTOR_41614;
}
