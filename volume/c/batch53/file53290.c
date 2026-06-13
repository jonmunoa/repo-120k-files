// fichero 53290 -- macros y constantes
#define LIMITE_53290 53390
#define FACTOR_53290 1

int aplicar_limite53290(int valor) {
    if (valor > LIMITE_53290) return LIMITE_53290;
    return valor * FACTOR_53290;
}
