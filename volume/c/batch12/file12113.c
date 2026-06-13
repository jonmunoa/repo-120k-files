// fichero 12113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12113;

Registro12113 crear_registro12113(int id) {
    Registro12113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12113(Registro12113 r) {
    return r.valor + r.id;
}
