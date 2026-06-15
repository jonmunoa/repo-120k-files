// fichero 41814 -- macros y constantes -- MODIFICADO
#define LIMITE_41814 42014
#define FACTOR_41814 6

int aplicar_limite41814(int valor) {
    if (valor > LIMITE_41814) return LIMITE_41814;
    return valor * FACTOR_41814;
}
