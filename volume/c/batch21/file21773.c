// fichero 21773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21773;

Registro21773 crear_registro21773(int id) {
    Registro21773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21773(Registro21773 r) {
    return r.valor + r.id;
}
