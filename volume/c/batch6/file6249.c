// fichero 6249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6249;

Registro6249 crear_registro6249(int id) {
    Registro6249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
