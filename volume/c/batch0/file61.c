// fichero 61 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro61;

Registro61 crear_registro61(int id) {
    Registro61 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
