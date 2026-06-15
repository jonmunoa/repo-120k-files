// fichero 18873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18873;

Registro18873 crear_registro18873(int id) {
    Registro18873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
