// fichero 43550 -- macros y constantes
#define LIMITE_43550 43650
#define FACTOR_43550 1

int aplicar_limite43550(int valor) {
    if (valor > LIMITE_43550) return LIMITE_43550;
    return valor * FACTOR_43550;
}
