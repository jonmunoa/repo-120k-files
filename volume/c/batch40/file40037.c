// fichero 40037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40037;

Registro40037 crear_registro40037(int id) {
    Registro40037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
