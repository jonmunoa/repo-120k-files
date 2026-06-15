// fichero 21762 -- macros y constantes -- MODIFICADO
#define LIMITE_21762 21962
#define FACTOR_21762 4

int aplicar_limite21762(int valor) {
    if (valor > LIMITE_21762) return LIMITE_21762;
    return valor * FACTOR_21762;
}
