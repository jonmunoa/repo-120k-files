// fichero 36129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36129;

Registro36129 crear_registro36129(int id) {
    Registro36129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
