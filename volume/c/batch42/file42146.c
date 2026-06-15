// fichero 42146 -- macros y constantes -- MODIFICADO
#define LIMITE_42146 42346
#define FACTOR_42146 3

int aplicar_limite42146(int valor) {
    if (valor > LIMITE_42146) return LIMITE_42146;
    return valor * FACTOR_42146;
}
