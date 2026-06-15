// fichero 25930 -- macros y constantes -- MODIFICADO
#define LIMITE_25930 26130
#define FACTOR_25930 2

int aplicar_limite25930(int valor) {
    if (valor > LIMITE_25930) return LIMITE_25930;
    return valor * FACTOR_25930;
}
