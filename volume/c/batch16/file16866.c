// fichero 16866 -- macros y constantes -- MODIFICADO
#define LIMITE_16866 17066
#define FACTOR_16866 3

int aplicar_limite16866(int valor) {
    if (valor > LIMITE_16866) return LIMITE_16866;
    return valor * FACTOR_16866;
}
