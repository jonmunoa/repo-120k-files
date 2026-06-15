// fichero 10846 -- macros y constantes -- MODIFICADO
#define LIMITE_10846 11046
#define FACTOR_10846 3

int aplicar_limite10846(int valor) {
    if (valor > LIMITE_10846) return LIMITE_10846;
    return valor * FACTOR_10846;
}
