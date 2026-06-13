// fichero 12993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12993;

Registro12993 crear_registro12993(int id) {
    Registro12993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12993(Registro12993 r) {
    return r.valor + r.id;
}
