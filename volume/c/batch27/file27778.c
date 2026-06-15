// fichero 27778 -- macros y constantes -- MODIFICADO
#define LIMITE_27778 27978
#define FACTOR_27778 5

int aplicar_limite27778(int valor) {
    if (valor > LIMITE_27778) return LIMITE_27778;
    return valor * FACTOR_27778;
}
