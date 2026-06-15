// fichero 43810 -- macros y constantes -- MODIFICADO
#define LIMITE_43810 44010
#define FACTOR_43810 2

int aplicar_limite43810(int valor) {
    if (valor > LIMITE_43810) return LIMITE_43810;
    return valor * FACTOR_43810;
}
