// fichero 41873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41873;

Registro41873 crear_registro41873(int id) {
    Registro41873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
