// fichero 43418 -- macros y constantes
#define LIMITE_43418 43518
#define FACTOR_43418 4

int aplicar_limite43418(int valor) {
    if (valor > LIMITE_43418) return LIMITE_43418;
    return valor * FACTOR_43418;
}
