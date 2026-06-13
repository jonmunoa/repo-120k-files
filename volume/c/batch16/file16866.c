// fichero 16866 -- macros y constantes
#define LIMITE_16866 16966
#define FACTOR_16866 2

int aplicar_limite16866(int valor) {
    if (valor > LIMITE_16866) return LIMITE_16866;
    return valor * FACTOR_16866;
}
