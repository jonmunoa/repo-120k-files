// fichero 19966 -- macros y constantes -- MODIFICADO
#define LIMITE_19966 20166
#define FACTOR_19966 3

int aplicar_limite19966(int valor) {
    if (valor > LIMITE_19966) return LIMITE_19966;
    return valor * FACTOR_19966;
}
