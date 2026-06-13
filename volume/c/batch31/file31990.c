// fichero 31990 -- macros y constantes
#define LIMITE_31990 32090
#define FACTOR_31990 1

int aplicar_limite31990(int valor) {
    if (valor > LIMITE_31990) return LIMITE_31990;
    return valor * FACTOR_31990;
}
