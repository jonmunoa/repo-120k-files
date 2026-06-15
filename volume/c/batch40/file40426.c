// fichero 40426 -- macros y constantes -- MODIFICADO
#define LIMITE_40426 40626
#define FACTOR_40426 3

int aplicar_limite40426(int valor) {
    if (valor > LIMITE_40426) return LIMITE_40426;
    return valor * FACTOR_40426;
}
