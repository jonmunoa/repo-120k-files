// fichero 32918 -- macros y constantes -- MODIFICADO
#define LIMITE_32918 33118
#define FACTOR_32918 5

int aplicar_limite32918(int valor) {
    if (valor > LIMITE_32918) return LIMITE_32918;
    return valor * FACTOR_32918;
}
