// fichero 18149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18149;

Registro18149 crear_registro18149(int id) {
    Registro18149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18149(Registro18149 r) {
    return r.valor + r.id;
}
