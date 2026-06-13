// fichero 43010 -- macros y constantes
#define LIMITE_43010 43110
#define FACTOR_43010 1

int aplicar_limite43010(int valor) {
    if (valor > LIMITE_43010) return LIMITE_43010;
    return valor * FACTOR_43010;
}
