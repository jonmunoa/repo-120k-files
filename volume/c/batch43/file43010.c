// fichero 43010 -- macros y constantes -- MODIFICADO
#define LIMITE_43010 43210
#define FACTOR_43010 2

int aplicar_limite43010(int valor) {
    if (valor > LIMITE_43010) return LIMITE_43010;
    return valor * FACTOR_43010;
}
