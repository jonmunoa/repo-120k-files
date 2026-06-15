// fichero 27338 -- macros y constantes -- MODIFICADO
#define LIMITE_27338 27538
#define FACTOR_27338 5

int aplicar_limite27338(int valor) {
    if (valor > LIMITE_27338) return LIMITE_27338;
    return valor * FACTOR_27338;
}
