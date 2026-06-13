// fichero 41714 -- macros y constantes
#define LIMITE_41714 41814
#define FACTOR_41714 5

int aplicar_limite41714(int valor) {
    if (valor > LIMITE_41714) return LIMITE_41714;
    return valor * FACTOR_41714;
}
