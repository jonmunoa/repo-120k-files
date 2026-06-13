// fichero 8566 -- macros y constantes
#define LIMITE_8566 8666
#define FACTOR_8566 2

int aplicar_limite8566(int valor) {
    if (valor > LIMITE_8566) return LIMITE_8566;
    return valor * FACTOR_8566;
}
