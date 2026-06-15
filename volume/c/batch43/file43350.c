// fichero 43350 -- macros y constantes -- MODIFICADO
#define LIMITE_43350 43550
#define FACTOR_43350 2

int aplicar_limite43350(int valor) {
    if (valor > LIMITE_43350) return LIMITE_43350;
    return valor * FACTOR_43350;
}
