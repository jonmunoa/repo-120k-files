// fichero 24893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24893;

Registro24893 crear_registro24893(int id) {
    Registro24893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
