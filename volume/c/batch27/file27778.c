// fichero 27778 -- macros y constantes
#define LIMITE_27778 27878
#define FACTOR_27778 4

int aplicar_limite27778(int valor) {
    if (valor > LIMITE_27778) return LIMITE_27778;
    return valor * FACTOR_27778;
}
