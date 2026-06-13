// fichero 53502 -- macros y constantes
#define LIMITE_53502 53602
#define FACTOR_53502 3

int aplicar_limite53502(int valor) {
    if (valor > LIMITE_53502) return LIMITE_53502;
    return valor * FACTOR_53502;
}
