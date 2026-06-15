// fichero 29458 -- macros y constantes -- MODIFICADO
#define LIMITE_29458 29658
#define FACTOR_29458 5

int aplicar_limite29458(int valor) {
    if (valor > LIMITE_29458) return LIMITE_29458;
    return valor * FACTOR_29458;
}
