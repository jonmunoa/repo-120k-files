// fichero 8945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8945;

Registro8945 crear_registro8945(int id) {
    Registro8945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
