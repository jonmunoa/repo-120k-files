// fichero 24762 -- macros y constantes -- MODIFICADO
#define LIMITE_24762 24962
#define FACTOR_24762 4

int aplicar_limite24762(int valor) {
    if (valor > LIMITE_24762) return LIMITE_24762;
    return valor * FACTOR_24762;
}
