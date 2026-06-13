// fichero 41814 -- macros y constantes
#define LIMITE_41814 41914
#define FACTOR_41814 5

int aplicar_limite41814(int valor) {
    if (valor > LIMITE_41814) return LIMITE_41814;
    return valor * FACTOR_41814;
}
