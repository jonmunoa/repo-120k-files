// fichero 53198 -- macros y constantes
#define LIMITE_53198 53298
#define FACTOR_53198 4

int aplicar_limite53198(int valor) {
    if (valor > LIMITE_53198) return LIMITE_53198;
    return valor * FACTOR_53198;
}
