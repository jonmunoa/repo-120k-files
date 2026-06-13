// fichero 45374 -- macros y constantes
#define LIMITE_45374 45474
#define FACTOR_45374 5

int aplicar_limite45374(int valor) {
    if (valor > LIMITE_45374) return LIMITE_45374;
    return valor * FACTOR_45374;
}
