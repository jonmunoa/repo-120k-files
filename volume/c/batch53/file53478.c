// fichero 53478 -- macros y constantes
#define LIMITE_53478 53578
#define FACTOR_53478 4

int aplicar_limite53478(int valor) {
    if (valor > LIMITE_53478) return LIMITE_53478;
    return valor * FACTOR_53478;
}
