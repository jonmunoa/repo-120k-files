// fichero 53650 -- macros y constantes
#define LIMITE_53650 53750
#define FACTOR_53650 1

int aplicar_limite53650(int valor) {
    if (valor > LIMITE_53650) return LIMITE_53650;
    return valor * FACTOR_53650;
}
