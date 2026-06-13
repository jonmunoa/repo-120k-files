// fichero 24290 -- macros y constantes
#define LIMITE_24290 24390
#define FACTOR_24290 1

int aplicar_limite24290(int valor) {
    if (valor > LIMITE_24290) return LIMITE_24290;
    return valor * FACTOR_24290;
}
