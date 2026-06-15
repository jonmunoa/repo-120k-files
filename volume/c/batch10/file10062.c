// fichero 10062 -- macros y constantes -- MODIFICADO
#define LIMITE_10062 10262
#define FACTOR_10062 4

int aplicar_limite10062(int valor) {
    if (valor > LIMITE_10062) return LIMITE_10062;
    return valor * FACTOR_10062;
}
