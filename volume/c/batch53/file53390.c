// fichero 53390 -- macros y constantes
#define LIMITE_53390 53490
#define FACTOR_53390 1

int aplicar_limite53390(int valor) {
    if (valor > LIMITE_53390) return LIMITE_53390;
    return valor * FACTOR_53390;
}
