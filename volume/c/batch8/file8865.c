// fichero 8865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8865;

Registro8865 crear_registro8865(int id) {
    Registro8865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
