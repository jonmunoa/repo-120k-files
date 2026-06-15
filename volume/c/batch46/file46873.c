// fichero 46873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46873;

Registro46873 crear_registro46873(int id) {
    Registro46873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
