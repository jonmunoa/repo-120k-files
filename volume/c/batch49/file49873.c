// fichero 49873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49873;

Registro49873 crear_registro49873(int id) {
    Registro49873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
