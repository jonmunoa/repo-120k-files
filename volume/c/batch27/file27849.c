// fichero 27849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27849;

Registro27849 crear_registro27849(int id) {
    Registro27849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27849(Registro27849 r) {
    return r.valor + r.id;
}
