// fichero 24066 -- macros y constantes
#define LIMITE_24066 24166
#define FACTOR_24066 2

int aplicar_limite24066(int valor) {
    if (valor > LIMITE_24066) return LIMITE_24066;
    return valor * FACTOR_24066;
}
