// fichero 38657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38657;

Registro38657 crear_registro38657(int id) {
    Registro38657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
