// fichero 23918 -- macros y constantes -- MODIFICADO
#define LIMITE_23918 24118
#define FACTOR_23918 5

int aplicar_limite23918(int valor) {
    if (valor > LIMITE_23918) return LIMITE_23918;
    return valor * FACTOR_23918;
}
