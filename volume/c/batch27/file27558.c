// fichero 27558 -- macros y constantes -- MODIFICADO
#define LIMITE_27558 27758
#define FACTOR_27558 5

int aplicar_limite27558(int valor) {
    if (valor > LIMITE_27558) return LIMITE_27558;
    return valor * FACTOR_27558;
}
