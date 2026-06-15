// fichero 6706 -- macros y constantes -- MODIFICADO
#define LIMITE_6706 6906
#define FACTOR_6706 3

int aplicar_limite6706(int valor) {
    if (valor > LIMITE_6706) return LIMITE_6706;
    return valor * FACTOR_6706;
}
