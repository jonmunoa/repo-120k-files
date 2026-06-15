// fichero 38689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38689;

Registro38689 crear_registro38689(int id) {
    Registro38689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
