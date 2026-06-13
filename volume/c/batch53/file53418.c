// fichero 53418 -- macros y constantes
#define LIMITE_53418 53518
#define FACTOR_53418 4

int aplicar_limite53418(int valor) {
    if (valor > LIMITE_53418) return LIMITE_53418;
    return valor * FACTOR_53418;
}
