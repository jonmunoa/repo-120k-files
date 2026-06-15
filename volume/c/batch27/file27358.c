// fichero 27358 -- macros y constantes -- MODIFICADO
#define LIMITE_27358 27558
#define FACTOR_27358 5

int aplicar_limite27358(int valor) {
    if (valor > LIMITE_27358) return LIMITE_27358;
    return valor * FACTOR_27358;
}
