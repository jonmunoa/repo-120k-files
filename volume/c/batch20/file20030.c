// fichero 20030 -- macros y constantes -- MODIFICADO
#define LIMITE_20030 20230
#define FACTOR_20030 2

int aplicar_limite20030(int valor) {
    if (valor > LIMITE_20030) return LIMITE_20030;
    return valor * FACTOR_20030;
}
