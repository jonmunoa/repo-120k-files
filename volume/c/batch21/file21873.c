// fichero 21873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21873;

Registro21873 crear_registro21873(int id) {
    Registro21873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
