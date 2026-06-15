// fichero 27122 -- macros y constantes -- MODIFICADO
#define LIMITE_27122 27322
#define FACTOR_27122 4

int aplicar_limite27122(int valor) {
    if (valor > LIMITE_27122) return LIMITE_27122;
    return valor * FACTOR_27122;
}
