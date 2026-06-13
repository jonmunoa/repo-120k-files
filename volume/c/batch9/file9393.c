// fichero 9393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9393;

Registro9393 crear_registro9393(int id) {
    Registro9393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9393(Registro9393 r) {
    return r.valor + r.id;
}
