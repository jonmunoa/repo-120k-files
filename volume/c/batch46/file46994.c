// fichero 46994 -- macros y constantes -- MODIFICADO
#define LIMITE_46994 47194
#define FACTOR_46994 6

int aplicar_limite46994(int valor) {
    if (valor > LIMITE_46994) return LIMITE_46994;
    return valor * FACTOR_46994;
}
