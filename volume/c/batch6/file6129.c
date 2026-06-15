// fichero 6129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6129;

Registro6129 crear_registro6129(int id) {
    Registro6129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
