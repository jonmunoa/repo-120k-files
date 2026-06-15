// fichero 23650 -- macros y constantes -- MODIFICADO
#define LIMITE_23650 23850
#define FACTOR_23650 2

int aplicar_limite23650(int valor) {
    if (valor > LIMITE_23650) return LIMITE_23650;
    return valor * FACTOR_23650;
}
