// fichero 49150 -- macros y constantes -- MODIFICADO
#define LIMITE_49150 49350
#define FACTOR_49150 2

int aplicar_limite49150(int valor) {
    if (valor > LIMITE_49150) return LIMITE_49150;
    return valor * FACTOR_49150;
}
