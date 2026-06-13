// fichero 53506 -- macros y constantes
#define LIMITE_53506 53606
#define FACTOR_53506 2

int aplicar_limite53506(int valor) {
    if (valor > LIMITE_53506) return LIMITE_53506;
    return valor * FACTOR_53506;
}
