// fichero 43550 -- macros y constantes -- MODIFICADO
#define LIMITE_43550 43750
#define FACTOR_43550 2

int aplicar_limite43550(int valor) {
    if (valor > LIMITE_43550) return LIMITE_43550;
    return valor * FACTOR_43550;
}
