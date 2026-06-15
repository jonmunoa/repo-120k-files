// fichero 8805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8805;

Registro8805 crear_registro8805(int id) {
    Registro8805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
