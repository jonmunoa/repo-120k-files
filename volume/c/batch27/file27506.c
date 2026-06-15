// fichero 27506 -- macros y constantes -- MODIFICADO
#define LIMITE_27506 27706
#define FACTOR_27506 3

int aplicar_limite27506(int valor) {
    if (valor > LIMITE_27506) return LIMITE_27506;
    return valor * FACTOR_27506;
}
