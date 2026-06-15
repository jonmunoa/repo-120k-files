// fichero 40494 -- macros y constantes -- MODIFICADO
#define LIMITE_40494 40694
#define FACTOR_40494 6

int aplicar_limite40494(int valor) {
    if (valor > LIMITE_40494) return LIMITE_40494;
    return valor * FACTOR_40494;
}
