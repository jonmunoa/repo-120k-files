// fichero 21201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21201;

Registro21201 crear_registro21201(int id) {
    Registro21201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
