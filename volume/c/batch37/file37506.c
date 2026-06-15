// fichero 37506 -- macros y constantes -- MODIFICADO
#define LIMITE_37506 37706
#define FACTOR_37506 3

int aplicar_limite37506(int valor) {
    if (valor > LIMITE_37506) return LIMITE_37506;
    return valor * FACTOR_37506;
}
