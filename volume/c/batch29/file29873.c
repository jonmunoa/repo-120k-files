// fichero 29873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29873;

Registro29873 crear_registro29873(int id) {
    Registro29873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
