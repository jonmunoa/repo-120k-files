// fichero 27418 -- macros y constantes -- MODIFICADO
#define LIMITE_27418 27618
#define FACTOR_27418 5

int aplicar_limite27418(int valor) {
    if (valor > LIMITE_27418) return LIMITE_27418;
    return valor * FACTOR_27418;
}
