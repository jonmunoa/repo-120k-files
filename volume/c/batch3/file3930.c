// fichero 3930 -- macros y constantes -- MODIFICADO
#define LIMITE_3930 4130
#define FACTOR_3930 2

int aplicar_limite3930(int valor) {
    if (valor > LIMITE_3930) return LIMITE_3930;
    return valor * FACTOR_3930;
}
