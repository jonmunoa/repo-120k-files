// fichero 51330 -- macros y constantes
#define LIMITE_51330 51430
#define FACTOR_51330 1

int aplicar_limite51330(int valor) {
    if (valor > LIMITE_51330) return LIMITE_51330;
    return valor * FACTOR_51330;
}
