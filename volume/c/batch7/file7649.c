// fichero 7649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7649;

Registro7649 crear_registro7649(int id) {
    Registro7649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
