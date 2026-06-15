// fichero 49714 -- macros y constantes -- MODIFICADO
#define LIMITE_49714 49914
#define FACTOR_49714 6

int aplicar_limite49714(int valor) {
    if (valor > LIMITE_49714) return LIMITE_49714;
    return valor * FACTOR_49714;
}
