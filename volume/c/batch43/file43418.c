// fichero 43418 -- macros y constantes -- MODIFICADO
#define LIMITE_43418 43618
#define FACTOR_43418 5

int aplicar_limite43418(int valor) {
    if (valor > LIMITE_43418) return LIMITE_43418;
    return valor * FACTOR_43418;
}
