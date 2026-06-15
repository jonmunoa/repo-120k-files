// fichero 20945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20945;

Registro20945 crear_registro20945(int id) {
    Registro20945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
