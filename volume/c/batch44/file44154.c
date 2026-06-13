// fichero 44154 -- macros y constantes
#define LIMITE_44154 44254
#define FACTOR_44154 5

int aplicar_limite44154(int valor) {
    if (valor > LIMITE_44154) return LIMITE_44154;
    return valor * FACTOR_44154;
}
