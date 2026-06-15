// fichero 40401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40401;

Registro40401 crear_registro40401(int id) {
    Registro40401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
