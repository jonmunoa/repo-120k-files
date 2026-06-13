// fichero 43730 -- macros y constantes
#define LIMITE_43730 43830
#define FACTOR_43730 1

int aplicar_limite43730(int valor) {
    if (valor > LIMITE_43730) return LIMITE_43730;
    return valor * FACTOR_43730;
}
