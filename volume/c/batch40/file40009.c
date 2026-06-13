// fichero 40009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40009;

Registro40009 crear_registro40009(int id) {
    Registro40009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40009(Registro40009 r) {
    return r.valor + r.id;
}
