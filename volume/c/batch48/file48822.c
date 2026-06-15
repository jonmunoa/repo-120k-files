// fichero 48822 -- macros y constantes -- MODIFICADO
#define LIMITE_48822 49022
#define FACTOR_48822 4

int aplicar_limite48822(int valor) {
    if (valor > LIMITE_48822) return LIMITE_48822;
    return valor * FACTOR_48822;
}
