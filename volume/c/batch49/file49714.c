// fichero 49714 -- macros y constantes
#define LIMITE_49714 49814
#define FACTOR_49714 5

int aplicar_limite49714(int valor) {
    if (valor > LIMITE_49714) return LIMITE_49714;
    return valor * FACTOR_49714;
}
