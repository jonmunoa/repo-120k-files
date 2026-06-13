// fichero 20718 -- macros y constantes
#define LIMITE_20718 20818
#define FACTOR_20718 4

int aplicar_limite20718(int valor) {
    if (valor > LIMITE_20718) return LIMITE_20718;
    return valor * FACTOR_20718;
}
