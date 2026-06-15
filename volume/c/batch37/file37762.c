// fichero 37762 -- macros y constantes -- MODIFICADO
#define LIMITE_37762 37962
#define FACTOR_37762 4

int aplicar_limite37762(int valor) {
    if (valor > LIMITE_37762) return LIMITE_37762;
    return valor * FACTOR_37762;
}
