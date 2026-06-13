// fichero 20030 -- macros y constantes
#define LIMITE_20030 20130
#define FACTOR_20030 1

int aplicar_limite20030(int valor) {
    if (valor > LIMITE_20030) return LIMITE_20030;
    return valor * FACTOR_20030;
}
